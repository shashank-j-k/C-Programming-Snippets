#include <stdio.h>

int Addition(int, int);
int Subtraction(int, int);
int Multiplication(int, int);
int Division(int, int);
int Modulus(int, int);

int main (void)
{
    int iNo1;
    int iNo2;
    int iAns;
    int iChoice;

    while (1)
    {
        printf("\n1 - Addition\n2 - Subtraction\n3 - Multiplication\n4 - Division\n5 - Modulus\n6 - Exit\n");
        printf("Enter your Choice :  ");
        scanf("%d", &iChoice);

        if(iChoice >= 1 && iChoice <=5)
        {
            printf("Enter two numbers :  ");
            scanf("%d %d", &iNo1, &iNo2);
        }
        
        switch (iChoice)
        {
            case 1:
                iAns = Addition(iNo1, iNo2);
                printf("\nSum is %d\n_____________________________\n", iAns);
                break;
            
            case 2:
                iAns = Subtraction(iNo1, iNo2);
                printf("\nDifference is %d\n_____________________________\n", iAns);
                break;

            case 3:
                iAns = Multiplication(iNo1, iNo2);
                printf("\nProduct is %d\n_____________________________\n", iAns);
                break;
            
            case 4:
                iAns = Division(iNo1, iNo2);
                printf("\nQuotient is %d\n_____________________________\n", iAns);
                break;

            case 5:
                iAns = Modulus(iNo1, iNo2);
                printf("\nRemainder is %d\n_____________________________\n", iAns);
                break;

            case 6:
                printf("GoodBye!\n");
                return 0;

            default:
                printf("\nInvalid Choice. Try again\n______________________________\n");
                continue;          
        }
    }
}

int Addition(int iNo1, int iNo2)
{
    return iNo1 + iNo2;
}

int Subtraction(int iNo1, int iNo2)
{
    return iNo1 - iNo2;
}

int Multiplication(int iNo1, int iNo2)
{
    return iNo1 * iNo2;
}

int Division(int iNo1, int iNo2)
{
    return iNo1 / iNo2;
}

int Modulus(int iNo1, int iNo2)
{
    return iNo1 % iNo2;
}
