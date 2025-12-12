/*Program to show we can return multiple values from a function using call by address and no return statement and storing result in same variables*/

#include <stdio.h>

void AddSub(int *, int *);

int main (void)        
{
    int iNo1;
    int iNo2;

    printf("Enter two numbers:\t");             // 63 36
    scanf("%d %d", &iNo1, &iNo2);

    AddSub(&iNo1, &iNo2);

    printf("Addition is    :\t%d\n", iNo1);    // 99
    printf("Subtraction is :\t%d", iNo2);      // 27

    return 0;
}

void  AddSub(int *piNo1, int *piNo2)
{
    int iTemp = *piNo1;

    *piNo1 = *piNo1 + *piNo2;
    *piNo2 = iTemp - *piNo2;
}