/* printf counts the format specifiers from the string and then prints that many parameters only no matter how many are passed to it*/
/* when no format specifier is encountered it prints the first parameter only*/

#include <stdio.h>

int main(void)
{
    char szStr[] = "Hello";
    char *pszStr = "Good";

    printf(szStr);                                          // Hello
    printf(pszStr);                                         // Good
    printf("Afternoon\n");                                  // Afternoon

    // printf(szStr, pszStr, "Afternoon", "\n");           // Hello     
    // printf(pszStr, szStr, "Afternoon", "\n");           // Good    
    // printf("Afternoon\n", szStr, pszStr);               // Afternoon     

    return 0;

}

/*
OUTPUT :

HelloGoodAfternoon
*/