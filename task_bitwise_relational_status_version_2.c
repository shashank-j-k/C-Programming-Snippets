/*
        less than                   => 0 0 0 0 1 => 1
        less than and equal to      => 0 0 0 1 0 => 2
        equal to                    => 0 0 1 0 0 => 4
        greater than and equal to   => 0 1 0 0 0 => 8
        greater than                => 1 0 0 0 0 => 16

*/

#include <stdio.h>
#define LT 1                            // less than
#define LE 2                            // less than and equal to
#define EQ 4                            // equal to
#define GE 8                            // greater than and equal to
#define GT 16                           // greater than

void Compare(int, int, char *);

int main(void)
{
    int iNo1;
    int iNo2;
    char chStatus;

    printf("Enter two numbers : ");
    scanf("%d %d", &iNo1, &iNo2);

    Compare(iNo1, iNo2, &chStatus);

    if(chStatus == (LE | EQ | GE))
    {
        printf("%d is not less than %d\n", iNo1, iNo2);
        printf("%d is less than and equal to %d\n", iNo1, iNo2);
        printf("%d is not greater than %d\n", iNo1, iNo2);
        printf("%d is greater than and equal to %d\n", iNo1, iNo2);
        printf("%d is equal to %d\n", iNo1, iNo2);

    }
    else if(chStatus == (LE | LT))   
    {
        printf("%d is less than %d\n", iNo1, iNo2);
        printf("%d is less than and equal to %d\n", iNo1, iNo2);
        printf("%d is not greater than %d\n", iNo1, iNo2);
        printf("%d is not greater than and equal to %d\n", iNo1, iNo2);
        printf("%d is not equal to %d\n", iNo1, iNo2);
    }
    else
    {
        printf("%d is not less than %d\n", iNo1, iNo2);
        printf("%d is not less than and equal to %d\n", iNo1, iNo2);
        printf("%d is greater than %d\n", iNo1, iNo2);
        printf("%d is greater than and equal to %d\n", iNo1, iNo2);
        printf("%d is not equal to %d\n", iNo1, iNo2);        
    }

    return 0;
}

void Compare(int iNo1, int iNo2, char *pchStatus)
{
    *pchStatus = *pchStatus ^ *pchStatus;

    if(iNo1 == iNo2)
    {
        *pchStatus = *pchStatus | (LE | EQ | GE);
    }

    else if(iNo1 < iNo2)
    {
        *pchStatus = *pchStatus | (LE | LT);
    }

    else
    {
        *pchStatus = *pchStatus | (GE | GT);
    }
}

/*
OUTPUT :

Enter two numbers : 72 72
72 is not less than 72
72 is less than and equal to 72
72 is not greater than 72
72 is greater than and equal to 72
72 is equal to 72
-------------------------------------
Enter two numbers : 72 27
72 is not less than 27
72 is not less than and equal to 27
72 is greater than 27
72 is greater than and equal to 27
72 is not equal to 27
-------------------------------------
Enter two numbers : 18 81
18 is less than 81
18 is less than and equal to 81
18 is not greater than 81
18 is not greater than and equal to 81
18 is not equal to 81
*/