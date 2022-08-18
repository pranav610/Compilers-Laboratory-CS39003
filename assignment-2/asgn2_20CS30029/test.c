#include "myl.h"

int main(){
    printStr("#############        TEST       #############\n\n");
    printStr("############# Testing: printStr #############\n");
    printStr("Test Case0: Hello World\n");
    char strTest1[] = "Test Case1: Input given as variable\n";
    printStr(strTest1);
    char strTest2[] = "Test Case2: Printing special characters: %%d \\n \\t \\r \n";
    printStr(strTest2);
    printStr("\n############# Testing: printInt #############\n");
    printStr("Test Case0: ");
    printInt(123);
    printStr(" (123)");
    printStr("\nTest Case1: ");
    printInt(-123);
    printStr(" (-123)");
    printStr("\nTest Case2: ");
    printInt(0);
    printStr(" (0)");
    printStr("\nTest Case3: ");
    printInt(-2147483648);
    printStr(" (-2147483648)");
    printStr("\nTest Case4: ");
    printInt(2147483647);
    printStr(" (2147483647)");
    printStr("\nTest Case5: ");
    printInt(5/2.0);
    printStr(" (5/2.0)");
    printStr("\n\n############# Testing: printFlt #############\n");

}

