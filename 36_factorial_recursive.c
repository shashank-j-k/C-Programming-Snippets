#include <stdio.h>

int Fact(int);

int main(void)
{
    int iNo;
    int iAns;

    printf("Enter a number : \t");                     // 7
    scanf("%d", &iNo);

    iAns = Fact(iNo);

    printf("Factorial of %d is :\t%d\n", iNo, iAns);   // Factorial of 7 is :     5040

    return 0;
}

int Fact(int iNo)
{
    if(iNo == 1)
        return 1;
    return iNo * Fact(iNo - 1);
}