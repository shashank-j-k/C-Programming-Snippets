#include <stdio.h>

int main(void)
{
    int iQuotient;
    int iRemainder;

    printf("Enter Quotient and Remainder :\t");
    scanf("%d %d", &iQuotient, &iRemainder);

    printf("iNo = %d", (iQuotient * 256) + iRemainder);

    return 0;
}