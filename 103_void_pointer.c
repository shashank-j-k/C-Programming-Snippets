#include <stdio.h>

int main(void)
{
    int iNo = 10;
    char chChar = 'A';
    void *pPtr = &iNo;

    printf("&pPtr\t=\t%d\n", &pPtr);                // 6422292
    printf("pPtr\t=\t%d\n", pPtr);                  // 6422300
    // printf("*pPtr\t=\t%d\n", *pPtr);             // error: invalid use of void expression + (warning: dereferencing 'void *' pointer)
    printf("*pPtr\t=\t%d\n", *(int *)pPtr);         // 10

    pPtr = &chChar;
    printf("&pPtr\t=\t%d\n", &pPtr);                // 6422292
    printf("pPtr\t=\t%d\n", pPtr);                  // 6422299
    // printf("*pPtr\t=\t%d\n", *pPtr);             // error: invalid use of void expression + (warning: dereferencing 'void *' pointer)
    printf("*pPtr\t=\t%c\n", *(char *)pPtr);        // A

    return 0;
}
