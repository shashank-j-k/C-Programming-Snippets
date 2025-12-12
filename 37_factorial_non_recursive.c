#include <stdio.h>

int FactVersion1(int);
int FactVersion2(int);

int main(void)
{
    int iNo;
    int iAns;

    printf("Enter a number : \t");                  // 7
    scanf("%d", &iNo);

    iAns = FactVersion1(iNo);
    printf("Factorial of %d is %d\n", iNo, iAns);   // Factorial of 7 is 5040

    iAns = FactVersion2(iNo);
    printf("Factorial of %d is %d\n", iNo, iAns);   // Factorial of 7 is 5040

    return 0;
}

int FactVersion1(int iNo)
{
    int iCounter;
    int iAns;

    iAns = 1;

    for(iCounter = 2; iCounter <= iNo; iCounter++)
        iAns = iAns * iCounter;

    return iAns;
}

int FactVersion2(int iNo)
{
    int iCounter;
    int iAns;

    iAns = iNo;

    for(iCounter = iNo - 1; iCounter > 1; iCounter --)
        iAns = iAns * iCounter;

    return iAns;
}
