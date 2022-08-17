#include "myl.h"

int main(){
    char *name = "Hello World\n";
    int x = printStr(name);
    printStr("Length of string: ");
    printInt(x);
    x = printStr("\n");
    x = printFlt(3);
    printStr("\n");
    printInt(x);
    printStr("\n");
}