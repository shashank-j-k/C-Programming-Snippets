#include <stdio.h>

void Fun(int);

int main(void)
{
    int iNo = 10;

    printf("Before Calling Fun iNo\t= \t%d\n", iNo);     // 10

    Fun(iNo);

    printf("After Calling Fun iNo \t= \t%d\n", iNo);      // 10
    
    return 0;
}

void Fun(int iNo)
{
    printf("In Fun iNo \t\t= \t%d\n", iNo);             // 10

    ++iNo;

    printf("Before Leaving Fun iNo\t= \t%d\n", iNo);     // 11
}