#include <stdio.h>
#include <string.h>

int main (void)
{
    char szStr[] = "Heelo";

    // char szStr[] = {'H', 'e', 'e', 'l', 'o', '\0'};       // allowed
    
    /*
    szStr[0] = 'H';
    szStr[1] = 'e';
    szStr[2] = 'e';                                          // allowed
    szStr[3] = 'l'; 
    szStr[4] = 'o';
    szStr[5] = '\0';
    */

    printf("sizeof(szStr) :\t%d\n", sizeof(szStr));         // 6
    printf("strlen(szStr) :\t%d\n", strlen(szStr));         // 5

    printf("%s\n", szStr);                                  // Heelo
    szStr[2] = 'l';                                         // allowed
    printf("%s\n", szStr);                                  // Hello

    // szStr = "Bye";                                       // error : assignment to expression with array type

    return 0;
}

/*
OUTPUT:

sizeof(szStr) : 6
strlen(szStr) : 5
Heelo
Hello
*/