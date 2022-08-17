#include<stdio.h>

int main(){
    float x = 3.1232;
    printf("%f\n",x);
    x -= (int)x;
    printf("%f\n",x);

}