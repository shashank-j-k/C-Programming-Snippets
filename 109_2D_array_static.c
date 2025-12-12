#include <stdio.h>
#define MAX 20

int main (void)
{
    int iNoOfRows;
    int iCounter1;
    int iCounter2;
    int iNoOfElements;
    int arArray[MAX][MAX];

    printf("Enter how many rows you want? (less than 20) :\t");
    scanf("%d", &iNoOfRows);

    printf("\nEnter how many elements you want in each row? (less than 20):\t");
    scanf("%d", &iNoOfElements);

    for(iCounter1 = 0; iCounter1 < iNoOfRows; iCounter1 ++)
    {
        for(iCounter2 = 0; iCounter2 < iNoOfElements; iCounter2 ++)
        {
            printf("Enter arArray[%d][%d]\t:\t", iCounter1, iCounter2);
            scanf("%d", &arArray[iCounter1][iCounter2]);
        }
        printf("\n");
    }

    printf("Array values are : \n\n");

    for(iCounter1 = 0; iCounter1 < iNoOfRows; iCounter1 ++)
    {
        for(iCounter2 = 0; iCounter2 < iNoOfElements; iCounter2 ++)
        {
            printf("arArray[%d][%d]\t:\t%d\n", iCounter1, iCounter2, arArray[iCounter1][iCounter2]);
        }
        printf("\n");
    }

    return 0;
}

/*
OUTPUT:

Enter how many rows you want? (less than 20) :  4

Enter how many elements you want in each row? (less than 20): 7
Enter arArray[0][0]     :       1
Enter arArray[0][1]     :       8
Enter arArray[0][2]     :       3
Enter arArray[0][3]     :       9
Enter arArray[0][4]     :       2
Enter arArray[0][5]     :       5
Enter arArray[0][6]     :       6

Enter arArray[1][0]     :       10
Enter arArray[1][1]     :       12
Enter arArray[1][2]     :       17
Enter arArray[1][3]     :       14
Enter arArray[1][4]     :       19
Enter arArray[1][5]     :       13
Enter arArray[1][6]     :       15

Enter arArray[2][0]     :       23
Enter arArray[2][1]     :       21
Enter arArray[2][2]     :       22
Enter arArray[2][3]     :       26
Enter arArray[2][4]     :       27
Enter arArray[2][5]     :       24
Enter arArray[2][6]     :       28

Enter arArray[3][0]     :       30
Enter arArray[3][1]     :       31
Enter arArray[3][2]     :       35
Enter arArray[3][3]     :       38
Enter arArray[3][4]     :       33
Enter arArray[3][5]     :       39
Enter arArray[3][6]     :       27

Array values are :

arArray[0][0]   :       1
arArray[0][1]   :       8
arArray[0][2]   :       3
arArray[0][3]   :       9
arArray[0][4]   :       2
arArray[0][5]   :       5
arArray[0][6]   :       6

arArray[1][0]   :       10
arArray[1][1]   :       12
arArray[1][2]   :       17
arArray[1][3]   :       14
arArray[1][4]   :       19
arArray[1][5]   :       13
arArray[1][6]   :       15

arArray[2][0]   :       23
arArray[2][1]   :       21
arArray[2][2]   :       22
arArray[2][3]   :       26
arArray[2][4]   :       27
arArray[2][5]   :       24
arArray[2][6]   :       28

arArray[3][0]   :       30
arArray[3][1]   :       31
arArray[3][2]   :       35
arArray[3][3]   :       38
arArray[3][4]   :       33
arArray[3][5]   :       39
arArray[3][6]   :       27
*/