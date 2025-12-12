#include <stdio.h>

int main(void)
{
    int iNo1;

    printf("Enter numerator :\t");
    scanf("%d", &iNo1);

    printf("Quotient is %d\n", iNo1 / 256);
    printf("Remainder is %d\n", iNo1 % 256);

    return 0;

}