#include <stdio.h>
#define MAX 10

int main (void)
{
    int iNoOfRows;
    int iCounter1;
    int iCounter2;
    int iCounter3;
    int iNoOfPlanes;
    int iNoOfElements;
    int arArray[MAX][MAX][MAX];

    printf("Enter how many planes you want? (less than 10) :\t");
    scanf("%d", &iNoOfPlanes);

    printf("\nEnter how many rows you want? (less than 10) :\t");
    scanf("%d", &iNoOfRows);

    printf("\nEnter how many elements you want in each row? (less than 10) :\t");
    scanf("%d", &iNoOfElements);

    for(iCounter1 = 0; iCounter1 < iNoOfPlanes; iCounter1 ++)
    {
        for(iCounter2 = 0; iCounter2 < iNoOfRows; iCounter2 ++)
        {
            for(iCounter3 = 0; iCounter3 < iNoOfElements; iCounter3 ++)
            {
                printf("Enter arArray[%d][%d][%d]\t:\t", iCounter1, iCounter2, iCounter3);
                scanf("%d", &arArray[iCounter1][iCounter2][iCounter3]);
            }
            printf("\n");
        }
        printf("\n");
    }

    printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\nArray values are :\n");

    for(iCounter1 = 0; iCounter1 < iNoOfPlanes; iCounter1 ++)
    {
        for(iCounter2 = 0; iCounter2 < iNoOfRows; iCounter2 ++)
        {
            for(iCounter3 = 0; iCounter3 < iNoOfElements; iCounter3 ++)
            {
                printf("Enter arArray[%d][%d][%d]\t:\t%d\n", iCounter1, iCounter2, iCounter3, arArray[iCounter1][iCounter2][iCounter3]);
            }
            printf("\n");
        }
        printf("-----------------------------------\n");
    }

    return 0;
}

/*
OUTPUT:

Enter how many planess you want? (less than 10) :       2

Enter how many rows you want? (less than 10) :  3

Enter how many elements you want in each row? (less than 10): 6     
Enter arArray[0][0][0]  :       1
Enter arArray[0][0][1]  :       9
Enter arArray[0][0][2]  :       3
Enter arArray[0][0][3]  :       5
Enter arArray[0][0][4]  :       8
Enter arArray[0][0][5]  :       2

Enter arArray[0][1][0]  :       11
Enter arArray[0][1][1]  :       13
Enter arArray[0][1][2]  :       16
Enter arArray[0][1][3]  :       18
Enter arArray[0][1][4]  :       12
Enter arArray[0][1][5]  :       19

Enter arArray[0][2][0]  :       20
Enter arArray[0][2][1]  :       21
Enter arArray[0][2][2]  :       24
Enter arArray[0][2][3]  :       23
Enter arArray[0][2][4]  :       26
Enter arArray[0][2][5]  :       29


Enter arArray[1][0][0]  :       5
Enter arArray[1][0][1]  :       3
Enter arArray[1][0][2]  :       2
Enter arArray[1][0][3]  :       7
Enter arArray[1][0][4]  :       1
Enter arArray[1][0][5]  :       8

Enter arArray[1][1][0]  :       10
Enter arArray[1][1][1]  :       12
Enter arArray[1][1][2]  :       17
Enter arArray[1][1][3]  :       18
Enter arArray[1][1][4]  :       12
Enter arArray[1][1][5]  :       19

Enter arArray[1][2][0]  :       21
Enter arArray[1][2][1]  :       22
Enter arArray[1][2][2]  :       20
Enter arArray[1][2][3]  :       26
Enter arArray[1][2][4]  :       28
Enter arArray[1][2][5]  :       25


xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

Array values are :
Enter arArray[0][0][0]  :       1
Enter arArray[0][0][1]  :       9
Enter arArray[0][0][2]  :       3
Enter arArray[0][0][3]  :       5
Enter arArray[0][0][4]  :       8
Enter arArray[0][0][5]  :       2

Enter arArray[0][1][0]  :       11
Enter arArray[0][1][1]  :       13
Enter arArray[0][1][2]  :       16
Enter arArray[0][1][3]  :       18
Enter arArray[0][1][4]  :       12
Enter arArray[0][1][5]  :       19

Enter arArray[0][2][0]  :       20
Enter arArray[0][2][1]  :       21
Enter arArray[0][2][2]  :       24
Enter arArray[0][2][3]  :       23
Enter arArray[0][2][4]  :       26
Enter arArray[0][2][5]  :       29

-----------------------------------
Enter arArray[1][0][0]  :       5
Enter arArray[1][0][1]  :       3
Enter arArray[1][0][2]  :       2
Enter arArray[1][0][3]  :       7
Enter arArray[1][0][4]  :       1
Enter arArray[1][0][5]  :       8

Enter arArray[1][1][0]  :       10
Enter arArray[1][1][1]  :       12
Enter arArray[1][1][2]  :       17
Enter arArray[1][1][3]  :       18
Enter arArray[1][1][4]  :       12
Enter arArray[1][1][5]  :       19

Enter arArray[1][2][0]  :       21
Enter arArray[1][2][1]  :       22
Enter arArray[1][2][2]  :       20
Enter arArray[1][2][3]  :       26
Enter arArray[1][2][4]  :       28
Enter arArray[1][2][5]  :       25

-----------------------------------
*/