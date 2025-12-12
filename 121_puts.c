/* puts appends newline character at the end of the printed string*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    int iNo = 10;
    char szStr[50] = "Hello";
    char *pszStr = "Good";

   puts(szStr);                     // Hello
   puts(pszStr);                    // Good
   puts("Afternoon");               // Afternoon

    return 0;
}

/*
OUTPUT :

Hello
Good
Afternoon
*/