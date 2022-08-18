#include "myl.h"
#include <math.h>
#define BUFF 100
#define FLOAT_PREC 6

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
    long int num = n;
    char buff[BUFF], zero = '0';
    int len = 0;
    if(num == 0) buff[len++] = zero;
    else
    {
        if(num < 0)
        {
            buff[len++] = '-';
            num = -num;
        }
        while(num > 0)
        {
            buff[len++] = num % 10 + '0';
            num /= 10;
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
    n = (int)(f * powl(10, FLOAT_PREC));
    char decimal[FLOAT_PREC];
    for(int i=0; i<FLOAT_PREC; i++)
    {   
        decimal[FLOAT_PREC - i - 1] = '0' + n%10;
        n /= 10;
    }
    len += FLOAT_PREC;
    printStr(decimal);
    return len;
}