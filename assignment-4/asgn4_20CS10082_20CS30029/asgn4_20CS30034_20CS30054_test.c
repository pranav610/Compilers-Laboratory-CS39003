// Test file for testing the Parser

/* 
    Mradul Agrawal: 20CS30034
    Swapnil Yasasvi: 20CS30054
*/

extern char* var1; 
extern int var2; 

inline int * function()
{
    _Bool abcd; 
    _Complex float com; 
    auto int autovar = 90; 
    return &autovar; 
}


int another_function(const signed int input)
{
    int output = 23;
    switch(input)
    {
        case 1:
            output = sizeof(output); 
            break;
        case 2:
            output = output >> 2;  
            output = output << 2;  
            break;
        default:
            output = ~output; 
            output = output ^ output;
            output = output & output;
            output = output | output;
            break;
    }

    if(output > input)
    {
        output++;
    }
    else{
        output--; 
    }
    return output; 
}

_Bool function_3(char try){
    enum array {a = 2, b = 2, c, d, e, f, g};
    int j = 10; 
    for(int i = 0; i < 10; i++){
        i = i/j; 
        i = i*j; 
        i = i+j; 
        i = i-j; 
        i = j; 
        i = i&j; 
        i = i|j; 
        i = ~j; 
        i = i^j; 
        i = i%j; 
    }
    int i = -j; 
    while(i > j){
        i = i>>j; 
        j = j<<i;
    }
    return 1; 
}

int main(){
    int a = 2,b = -4; 
    int c = 4;
    float b_ = 3.2, c_ = 3.2e-2, d_ = 232.002E+3; 
    char x = 'a';
    char y[20] = "this is a string\n";
    a -= 1; 
    a += 1; 
    a *= 1; 
    a /= 1; 
    if(a != 1){
        a = 1; 
    }
    return 0;
}