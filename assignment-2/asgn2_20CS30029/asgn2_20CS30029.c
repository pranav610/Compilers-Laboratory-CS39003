#include "myl.h"
#define BUFF 100
#define FLOAT_PREC 1e6

int printStr(char *str)
{
    int len = 0;
    while (str[len] != '\0')
        len++;

    __asm__ __volatile__ (
        "movl $1, %%eax \n\t"
        "movq $1, %%rdi \n\t"
        "syscall \n\t"
        :
        :"S"(str), "d"(len)
    );
    return len;
}

int printInt(int n)
{
    char buff[BUFF], zero = '0';
    int len = 0;
    if(n == 0) buff[len++] = zero;
    else
    {
        if(n < 0)
        {
            buff[len++] = '-';
            n = -n;
        }
        while(n > 0)
        {
            buff[len++] = n % 10 + '0';
            n /= 10;
        }
        int j = 0, k = len - 1;
        if(buff[0] == '-') j = 1;
        while(j < k)
        {
            char temp = buff[j];
            buff[j] = buff[k];
            buff[k] = temp;
            j++;
            k--;
        }
    }
    __asm__ __volatile__ (
        "movl $1, %%eax \n\t"
        "movq $1, %%rdi \n\t"
        "syscall \n\t"
        :
        :"S"(buff), "d"(len)
    );

    if(len > BUFF) return ERR;
    return len;
}

int printFlt(float f)
{   
    int n = (int)f;
    int len = printInt(n);
    if(len == ERR) return ERR;
    len += printStr(".");
    f = f - n;
    n = (int)(f * FLOAT_PREC);
    len += printInt(n);
    return len;
}