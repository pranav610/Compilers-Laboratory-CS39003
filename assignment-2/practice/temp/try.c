#include<stdio.h>
#include<limits.h>
#include<float.h>

int main(){
    // float f = (float) FLT_MAX;
    // long long int n = (long long int) f;
    // printf("%lld\n", n);
    // printf("%f\n", f);

    // printf("%lu\n", sizeof(long long int));
    // printf("%lu\n", sizeof(long int));
    // printf("%lu\n", sizeof(int));
    // printf("%lu\n", sizeof(float));

    long INT_MAX_ = 1;
    INT_MAX_ <<= 31;
    printf("%ld\n", INT_MAX_);
}