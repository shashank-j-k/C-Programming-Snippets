#include <stdio.h>
#define MAX 20
#define EQUAL 1
#define NOT_EQUAl 0

int ArrayComparison(int [], int [], int);

int main (void)
{
    int iSize1;
    int iSize2;
    int iCounter;
    int arArray1[MAX];
    int arArray2[MAX];

    printf("How many elements in array 1 (<%d):\t", MAX);         // 8  
    scanf("%d", &iSize1);

    printf("How many elements in array 2 (<%d):\t", MAX);         // 8
    scanf("%d", &iSize2);

    if(iSize1 != iSize2)
    {
        printf("Arrays are not equal\n");
        return 0;
    }

    printf("\nEnter data for array 1 :- \n");
    for(iCounter = 0; iCounter < iSize1; iCounter ++)
    {
        printf("Enter arArray1[%d] : ", iCounter);
        scanf("%d", &arArray1[iCounter]);
    }

    printf("\nEnter data for array 2 :- \n");
    for(iCounter = 0; iCounter < iSize2; iCounter ++)
    {
        printf("Enter arArray2[%d] : ", iCounter);
        scanf("%d", &arArray2[iCounter]);
    }

    printf("\nElements of arArray1 are :- \n");
    for(iCounter = 0; iCounter < iSize1; iCounter ++)
    {
        printf("arArray1[%d] = %d\n", iCounter, arArray1[iCounter]);
    }

    printf("\nElements of arArray2 are :- \n");
    for(iCounter = 0; iCounter < iSize2; iCounter ++)
    {
        printf("arArray2[%d] = %d\n", iCounter, arArray2[iCounter]);
    }

    if(ArrayComparison(arArray1, arArray2, iSize1))
        printf("\nArrays are Equal\n");
    else
        printf("\nArrays are not Equal\n");

    return 0;
}
/*
OUTPUT :

How many elements in array 1 (<20):  8
How many elements in array 2 (<20):  8

Enter data for array 1 :-
Enter arArray1[0] : 1
Enter arArray1[1] : 0
Enter arArray1[2] : 2
Enter arArray1[3] : 9
Enter arArray1[4] : 3
Enter arArray1[5] : 8
Enter arArray1[6] : 4
Enter arArray1[7] : 7

Enter data for array 2 :-
Enter arArray2[0] : 1
Enter arArray2[1] : 0
Enter arArray2[2] : 2
Enter arArray2[3] : 9
Enter arArray2[4] : 3
Enter arArray2[5] : 84
Enter arArray2[6] : 7
Enter arArray2[7] : 5

Elements of arArray1 are :-
arArray1[0] = 1
arArray1[1] = 0
arArray1[2] = 2
arArray1[3] = 9
arArray1[4] = 3
arArray1[5] = 8
arArray1[6] = 4
arArray1[7] = 7

Elements of arArray2 are :-
arArray2[0] = 1
arArray2[1] = 0
arArray2[2] = 2
arArray2[3] = 9
arArray2[4] = 3
arArray2[5] = 84
arArray2[6] = 7
arArray2[7] = 5

Arrays are not Equal
*/
int ArrayComparison(int arArray1[], int arArray2[], int iSize)
{   
    int iCounter;

    for(iCounter = 0; iCounter < iSize; iCounter ++)
    {
        if (arArray1[iCounter] != arArray2[iCounter])
            return NOT_EQUAl;
    }

    return EQUAL;
}
