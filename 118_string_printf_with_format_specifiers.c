/* printf appends the next output to the previuos one*/

#include <stdio.h>

int main(void)
{
    char szStr[] = "Hello";
    char *pszStr = "Good";

    printf("%s", szStr);                                // Hello
    printf("%s", pszStr);                               // Good
    printf("Afternoon\n");                              // Afternoon

    // OR

    printf("%s%s%s", szStr, pszStr, "Afternoon");       // HelloGoodAfternoon

    return 0;

}

/*
OUTPUT :

HelloGoodAfternoon
HelloGoodAfternoon
*/