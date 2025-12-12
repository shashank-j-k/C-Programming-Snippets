#include <stdio.h>

void Fun(int *pPtr);

int main(void)
{
    int iNo = 10;

    printf("Before Calling Fun iNo\t= \t%d\n", iNo);     // 10

    Fun(&iNo);

    printf("After Calling Fun iNo \t= \t%d\n", iNo);      // 11
    
    return 0;
}

void Fun(int *pPtr)
{
    printf("In Fun iNo \t\t= \t%d\n", *pPtr);             // 10

    ++ *pPtr;

    printf("Before Leaving Fun iNo\t= \t%d\n", *pPtr);     // 11
}