#include<unistd.h>
#define LEN 19
int main(){
    char str[LEN] = "My Second program\n";
    write(1, str, LEN);
    _exit(0);
}