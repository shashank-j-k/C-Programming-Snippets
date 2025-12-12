#include <stdio.h>
#include <string.h>

int main (void)
{
    char *pszStr = "Good Morning";

    printf("sizeof(szStr) :\t%d\n", sizeof(pszStr));         // 8
    printf("strlen(szStr) :\t%d\n", strlen(pszStr));         // 12

    puts(pszStr);                                            // Good Morning
    // pszStr[4] = '_';                                      // crash on Visual Studio Code
    puts(pszStr);                                            // Good Morning

    pszStr = "Bye";                                          // allowed
    puts(pszStr);                                            // Bye

    return 0;
}

/*
OUTPUT :    (compiled on Visual Studio Command Prompt 2010)

sizeof(szStr) : 8
strlen(szStr) : 12
Good Morning
Good_Morning
Bye
*/

/*
OUTPUT :    (compiled on Visual Studio Code)

sizeof(szStr) : 4
strlen(szStr) : 12
Good Morning
*/