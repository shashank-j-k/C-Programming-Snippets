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

char Compare(int, int);

int main(void)
{
    int iNo1;
    int iNo2;
    char chStatus;

    printf("Enter two numbers : ");
    scanf("%d %d", &iNo1, &iNo2);

    chStatus = Compare(iNo1, iNo2);

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

char Compare(int iNo1, int iNo2)
{
    char chRetStatus;

    chRetStatus = chRetStatus ^ chRetStatus;

    if(iNo1 == iNo2)
    {
        chRetStatus = chRetStatus | (LE | EQ | GE);
        // OR
        // chRetStatus = chRetStatus | 2;
        // chRetStatus = chRetStatus | 4;
        // chRetStatus = chRetStatus | 8;
    }

    else if(iNo1 < iNo2)
    {
        chRetStatus = chRetStatus | (LE | LT);
        // OR
        // chRetStatus = chRetStatus | 1;
        // chRetStatus = chRetStatus | 2;
    }

    else
    {
        chRetStatus = chRetStatus | (GE | GT);
        // OR
        // chRetStatus = chRetStatus | 8;
        // chRetStatus = chRetStatus | 16;
    }

    return chRetStatus;
}

/*
OUTPUT :

Enter two numbers : 54 54
54 is not less than 54
54 is less than and equal to 54
54 is not greater than 54
54 is greater than and equal to 54
54 is equal to 54
----------------------------------------
Enter two numbers : 45 54
45 is less than 54
45 is less than and equal to 54
45 is not greater than 54
45 is not greater than and equal to 54
45 is not equal to 54
----------------------------------------
Enter two numbers : 54 45
54 is not less than 45
54 is not less than and equal to 45
54 is greater than 45
54 is greater than and equal to 45
54 is not equal to 45
*/