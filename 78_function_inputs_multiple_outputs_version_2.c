
/*Program to show we can return multiple values from a function using call by address and return statement*/

#include <stdio.h>

int AddSub(int, int, int *);

int main (void)        
{
    int iNo1;
    int iNo2;
    int iSum;
    int iDiff;

    printf("Enter two numbers:\t");             // 81 18
    scanf("%d %d", &iNo1, &iNo2);

    iSum = AddSub(iNo1, iNo2, &iDiff);

    printf("Addition is    :\t%d\n", iSum);     // 99
    printf("Subtraction is :\t%d", iDiff);      // 63

    return 0;
}

int AddSub(int iNo1, int iNo2, int *piDiff)
{
    *piDiff = iNo1 - iNo2;
    return iNo1 + iNo2;
}