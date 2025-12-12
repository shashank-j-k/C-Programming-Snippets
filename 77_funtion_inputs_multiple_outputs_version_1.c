/*Program to show we can return multiple values from a function using call by address and no return statement*/

#include <stdio.h>

void AddSub(int, int, int *, int *);

int main (void)        
{
    int iNo1;
    int iNo2;
    int iSum;
    int iDiff;

    printf("Enter two numbers:\t");             // 56 23
    scanf("%d %d", &iNo1, &iNo2);

    AddSub(iNo1, iNo2, &iSum, &iDiff);

    printf("Addition is    :\t%d\n", iSum);     // 79
    printf("Subtraction is :\t%d", iDiff);      // 33

    return 0;
}

void AddSub(int iNo1, int iNo2, int *piSum, int *piDiff)
{
    *piSum = iNo1 + iNo2;
    *piDiff = iNo1 - iNo2;
}