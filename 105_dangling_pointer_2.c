#include <stdio.h>

void Fun(int **);

int main(void)
{
    int  *pPtr = NULL;
    Fun(&pPtr);
    printf("*pPtr\t=\t%d\n");               // 4200864 (dangling pointer retaining garbage value)

    return 0;
}

void Fun(int **ppPtr)
{
    int iNo =10;
    *ppPtr = &iNo;

    printf("ppPtr\t=\t%d\n", ppPtr);        // 6422300
    printf("*ppPtr\t=\t%d\n", *ppPtr);      // 6422252
    printf("**ppPtr\t=\t%d\n", **ppPtr);    // 10
}

/* 
OUTPUT :

ppPtr   =       6422300
*ppPtr  =       6422252
**ppPtr =       10
*pPtr   =       4200864
*/