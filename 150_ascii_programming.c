#include <stdio.h>
#include <string.h>

int main(void)
{
    char chChar = 'A';
    char szString[] = "Hello";
    char *pszString = "Hello";

    printf("sizeof(chChar)  \t:\t%d\n", sizeof(chChar));            // 1
    printf("sizeof(szString)\t:\t%d\n", sizeof(szString));          // 6
    printf("sizeof(pszString)\t:\t%d\n\n", sizeof(pszString));      // 8

    printf("strlen(szString)\t:\t%d\n", strlen(szString));          // 5
    printf("strlen(pszString)\t:\t%d\n", strlen(pszString));        // 5

    return 0;
}