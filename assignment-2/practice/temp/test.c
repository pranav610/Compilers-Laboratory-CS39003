#include "myl.h"

int main(){
    printStr("#############        TEST       #############\n\n");

    
    printStr("############# Testing: printStr #############\n");
    printStr("Test Case0: Hello World\n");
    char strTest1[] = "Test Case1: Input given as variable\n";
    printStr(strTest1);
    char strTest2[] = "Test Case2: Printing special characters: %d \\n \\t \\r \n";
    printStr(strTest2);


    printStr("\n############# Testing: printInt #############\n");
    printStr("Value in bracket denotes argument passed.\n");
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
    printStr("Value in bracket denotes argument passed.\n");
    printStr("Test Case0: ");
    printFlt(123.0);
    printStr(" (123.0)");
    printStr("\nTest Case1: ");
    printFlt(-123.0);
    printStr(" (-123.0)");
    printStr("\nTest Case2: ");
    printFlt(-0.0001);
    printStr(" (-0.0001)");
    printStr("\nTest Case3: ");
    printFlt(-2.0001);
    printStr(" (-2.0001)");
    printStr("\nTest Case4: ");
    printFlt(2.0001);
    printStr(" (2.0001)");
    printStr("\nTest Case5: ");
    printFlt(5.0/2.0);
    printStr(" (5.0/2.0)");

    int input;
    int retVal = OK;
    printStr("\n\n############# Testing: readInt #############\n");
    printStr("Test Case0: Enter any negative interger(for example:123)\n");
    retVal = readInt(&input);
    if(retVal == ERR) printStr("Error: Invalid Input\n\n");
    else{
        printStr("Entered number is: ");
        printInt(input);
        printStr("\n\n");
    }

    printStr("Test Case1: Enter any negative interger(for example:-123)\n");
    retVal = readInt(&input);
    if(retVal == ERR) printStr("Error: Invalid Input\n\n");
    else{
        printStr("Entered number is: ");
        printInt(input);
        printStr("\n\n");
    }

    printStr("Test Case2: Enter zero(for example:0)\n");
    retVal = readInt(&input);
    if(retVal == ERR) printStr("Error: Invalid Input\n\n");
    else{
        printStr("Entered number is: ");
        printInt(input);
        printStr("\n\n");
    }

    printStr("Test Case3: Enter any positive floating point number(for example:123.0)\n");
    retVal = readInt(&input);
    if(retVal == ERR) printStr("Error: Invalid Input\n\n");
    else{
        printStr("Entered number is: ");
        printInt(input);
        printStr("\n\n");
    }

    printStr("Test Case4: Enter any negative floating point number(for example:-123.0)\n");
    retVal = readInt(&input);
    if(retVal == ERR) printStr("Error: Invalid Input\n\n");
    else{
        printStr("Entered number is: ");
        printInt(input);
        printStr("\n\n");
    }

    printStr("Test Case5: Enter any postive integer starting with +(for example:+123)\n");
    retVal = readInt(&input);
    if(retVal == ERR) printStr("Error: Invalid Input\n\n");
    else{
        printStr("Entered number is: ");
        printInt(input);
        printStr("\n\n");
    }

    printStr("Test Case6: Enter maximum integer(for example:2147483647)\n");
    retVal = readInt(&input);
    if(retVal == ERR) printStr("Error: Invalid Input\n\n");
    else{
        printStr("Entered number is: ");
        printInt(input);
        printStr("\n\n");
    }

    printStr("Test Case7: Enter minimum integer(for example:-2147483648)\n");
    retVal = readInt(&input);
    if(retVal == ERR) printStr("Error: Invalid Input\n\n");
    else{
        printStr("Entered number is: ");
        printInt(input);
        printStr("\n\n");
    }

    printStr("Test Case8: Enter any invalid input(for example:abc)\n");
    retVal = readInt(&input);
    if(retVal == ERR) printStr("Error: Invalid Input\n\n");
    else{
        printStr("Entered number is: ");
        printFlt(input);
        printStr("\n\n");
    }


    float in;
    retVal = OK;
    printStr("\n############# Testing: readFlt #############\n");
    printStr("Test Case0: Enter any postive floating point number(for example:123.321)\n");
    retVal = readFlt(&in);
    if(retVal == ERR) printStr("Error: Invalid Input\n\n");
    else{
        printStr("Entered number is: ");
        printFlt(in);
        printStr("\n\n");
    }
    
    printStr("Test Case1: Enter any negative floating point number(for example:-123.321\n");
    retVal = readFlt(&in);
    if(retVal == ERR) printStr("Error: Invalid Input\n\n");
    else{
        printStr("Entered number is: ");
        printFlt(in);
        printStr("\n\n");
    }

    printStr("Test Case2: Enter zero(for example:0.0000)\n");
    retVal = readFlt(&in);
    if(retVal == ERR) printStr("Error: Invalid Input\n\n");
    else{
        printStr("Entered number is: ");
        printFlt(in);
        printStr("\n\n");
    }

    printStr("Test Case3: Enter any number with positive exponent(for example:2.3324e4)\n");
    retVal = readFlt(&in);
    if(retVal == ERR) printStr("Error: Invalid Input\n\n");
    else{
        printStr("Entered number is: ");
        printFlt(in);
        printStr("\n\n");
    }

    printStr("Test Case4: Enter any number with negative exponent(for example:3143321e-5)\n");
    retVal = readFlt(&in);
    if(retVal == ERR) printStr("Error: Invalid Input\n\n");
    else{
        printStr("Entered number is: ");
        printFlt(in);
        printStr("\n\n");
    }

    printStr("Test Case5: Enter any number with positive exponent(for example:2.3324e+4)\n");
    retVal = readFlt(&in);
    if(retVal == ERR) printStr("Error: Invalid Input\n\n");
    else{
        printStr("Entered number is: ");
        printFlt(in);
        printStr("\n\n");
    }

    printStr("Test Case6: Enter any invalid input(for example:324e-5.34)\n");
    retVal = readFlt(&in);
    if(retVal == ERR) printStr("Error: Invalid Input\n\n");
    else{
        printStr("Entered number is: ");
        printFlt(in);
        printStr("\n\n");
    }

    




}

