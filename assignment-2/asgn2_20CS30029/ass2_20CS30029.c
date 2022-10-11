#include "myl.h"
#define BUFF 100                                    // buffer size for reading from STDIN
#define FLOAT_PREC 6                                // precision for floating point numbers

int printStr(char *str)
{
    int len = 0;                                    // length of the string
    while (str[len] != '\0')
        len++;

    __asm__ __volatile__ (
        "movl $1, %%eax \n\t"
        "movq $1, %%rdi \n\t"
        "syscall \n\t"
        :
        :"S"(str), "d"(len)
    );
    return len;                                     // return the length of the string
}

int printInt(int n)
{   
    long int num = n;                               // use long to avoid overflow
    char buff[BUFF], zero = '0';
    int len = 0;
    if(num == 0) buff[len++] = zero;                // if number is 0, print string 0
    else
    {
        if(num < 0)
        {
            buff[len++] = '-';                      // negative sign
            if(len == BUFF) return ERR;             // buffer overflow
            num = -num;                             // make number positive
        }   
        while(num > 0)
        {
            buff[len++] = num % 10 + '0';           // convert number to string
            if(len == BUFF) return ERR;             // buffer overflow
            num /= 10;                              // divide number by 10
        }
        int j = 0, k = len - 1;
        if(buff[0] == '-') j = 1;

        // reverse order of the string to print number in correct order
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

    // return the length of the string
    return len;
}

int readInt(int *n)
{
    char buff[BUFF];
    int len;

    __asm__ __volatile__ (
        "movl $0, %%eax \n\t"
        "movq $0, %%rdi \n\t"
        "syscall \n\t"
        :"=a"(len)
        :"S"(buff), "d"(BUFF)
    );

    // return ERR if buffer is empty
    if(len <= 0)
        return ERR;

    int i = 0, isNeg= 0;
    long num = 0;

    if(buff[0] == '-')
    {
        isNeg = 1;
        i++;
    }
    if(buff[0] == '+')
        i++;

    // keep adding digits to the number until we reach the end of the string or found a non-digit character
    while(buff[i]!=' ' && buff[i]!='\n' && buff[i]!='\t')
    {   
        if(buff[i]=='.') break;
        if(buff[i]>'9' || buff[i]<'0') return ERR;
        num *= 10;
        num += buff[i] - '0';
        i++;
        if(i == BUFF) return ERR;
    }

    // check if number is within range of int
    long INT_MAX_ = 1;
    INT_MAX_ <<= 31;
    if(isNeg){
        if(num <= INT_MAX_) num = -num;
        else return ERR;
    }
    else
        if(num >= INT_MAX_) return ERR; 

    // return number
    *n = num;
    return OK;                                  // return OK if number is within range of int
}

int printFlt(float f)
{   
    // store integer part of the number in long long variable n 
    long long n = (int)f;

    int len = 0;

    // if number is -0.32 the following line handle it
    if(f < 0. && n == 0) {
        printStr("-");
        len++;
    }

    // print integer part of the number
    len = printInt(n);
    if(len == ERR) return ERR;

    // if number is less than 0 then conver it into positive number as integer part is already printed
    if(f < 0.) f = -f;
    
    len += printStr(".");

    // calculation of 6 decimal places
    long long exp = 1;
    for(int i=0; i<FLOAT_PREC; i++) exp*=10;
    n = (long long)(f * exp);
    char decimal[FLOAT_PREC];
    for(int i=0; i<FLOAT_PREC; i++)
    {   
        decimal[FLOAT_PREC - i - 1] = '0' + n%10;
        n /= 10;
    }
    // print decimal part of the number
    len += FLOAT_PREC;
    printStr(decimal);

    // return the length of the string
    return len;
}

int readFlt(float *f)
{
    char buff[BUFF];
    int len;

    __asm__ __volatile__ (
        "movl $0, %%eax \n\t"
        "movq $0, %%rdi \n\t"
        "syscall \n\t"
        :"=a"(len)
        :"S"(buff), "d"(BUFF)
    );

    if(len <= 0)
        return ERR;
    
    int i = 0, isNeg= 0;
    float num = 0;

    // sign checking of the input
    if(buff[0] == '-')
    {
        isNeg = 1;
        i++;
    }
    if(buff[0] == '+')
        i++;
    
    // keep adding digits untill we reach end of input or found E/e/. or non valid character
    // integer part will be stored in num
    while(buff[i]!=' ' && buff[i]!='\n' && buff[i]!='\t')
    {
        if(buff[i]=='.') break;
        if(buff[i] == 'e' || buff[i] == 'E') break;
        if(buff[i]>'9' || buff[i]<'0') return ERR;
        num *= 10;
        num += buff[i] - '0';
        i++;
        if(i == BUFF) return ERR;
    }

    // the following line will handle inputs like 123, -123
    if(buff[i] != 'e' && buff[i]!='E' && buff[i] != '.') 
    {
        if(isNeg) num = -num;
        *f = num;
        return OK;
    }

    // if next character is '.' then we have to read decimal part of the number
    if(buff[i] == '.')
    {
        i++;
        double power = 10.0;
        // keep adding decimals untill we reach end of input or found E or e or non valid character
        while(buff[i]!=' ' && buff[i]!='\n' && buff[i]!='\t' && buff[i]!='e' && buff[i]!='E')
        {
            if(buff[i]>'9' || buff[i]<'0') return ERR;
            num += (buff[i] - '0') / power;
            power *= 10.0;
            i++;
            if(i == BUFF) return ERR;
        }
    }

    // if next character is 'e' or 'E' then we have to read exponent part of the number
    if(buff[i] == 'e' || buff[i]=='E')
    {
        i++;
        int exp = 0;
        if(buff[i] == '-')
        {
            i++;
            while(buff[i]!=' ' && buff[i]!='\n' && buff[i]!='\t')
            {
                if(buff[i]>'9' || buff[i]<'0') return ERR;
                exp *= 10;
                exp += buff[i] - '0';
                i++;
                if(i == BUFF) return ERR;
            }
            exp = -exp;
        }
        else
        {   
            if(buff[i] == '+')
                i++;
            while(buff[i]!=' ' && buff[i]!='\n' && buff[i]!='\t')
            {
                if(buff[i]>'9' || buff[i]<'0') return ERR;
                exp *= 10;
                exp += buff[i] - '0';
                i++;
                if(i == BUFF) return ERR;
            }
        }
        // now we will multiply or divide the number according to the exponent
        if(exp < 0)
        {
            int j = 0, k = -exp;
            while(j < k)
            {
                num /= 10.0; // division in case f negative exponent
                j++;
            }
        }
        else
        {
            int j = 0, k = exp;
            while(j < k)
            {
                num *= 10.0; // multiplication in case f positive exponent
                j++;
            }
        }
    }

    // add sign according to the input
    if(isNeg) num = -num;
    *f = num;
    // return OK as no error is found
    return OK;
}