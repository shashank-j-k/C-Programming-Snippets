#include <stdio.h>

int main(void)
{
    int iChoice;
    int iNo1, iNo2;

    printf("1 - Addition\n2 - Subtraction\n3 - Multiplication\n");
    printf("4 - Division\n5 - Modulus\nEnter your choice\n");

    scanf("%d", &iChoice);

    if(iChoice <= 0 || iChoice > 5)
    {
        printf("Wrong Choice\n");
        return -1;
    }
    else 
    {
        printf("Enter Two Numbers\n");
        scanf("%d %d", &iNo1, &iNo2);
    }

    switch(iChoice)
    {
        case 1:
            printf("Sum is %d", iNo1 + iNo2);
            break;

        case 2:
            printf("Difference is %d", iNo1 - iNo2);
            break;

        case 3:
            printf("Product is %d", iNo1 * iNo2);
            break;

        case 4:
            printf("Quotient is %d", iNo1 / iNo2);
            break;

        case 5:
            printf("Remainder is %d", iNo1 % iNo2);
    }

    return 0;
}