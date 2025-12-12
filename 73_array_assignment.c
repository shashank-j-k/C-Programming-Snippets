#include <stdio.h>
#define MAX 20

void ArrayAssignment(int [], int [], int);

int main (void)
{
    int iSize;
    int iCounter;
    int arArray1[MAX];
    int arArray2[MAX];

    printf("Enter size of array (<%d):\t", MAX);
    scanf("%d", &iSize);

    for(iCounter = 0; iCounter < iSize; iCounter ++)
    {
        printf("Enter arArray1[%d] : ", iCounter);
        scanf("%d", &arArray1[iCounter]);
    }

    ArrayAssignment(arArray1, arArray2, iSize);

    printf("\nElements of arArray1 are :-\n");
    for(iCounter = 0; iCounter < iSize; iCounter ++)
    {
        printf("arArray1[%d] = %d\n", iCounter, arArray1[iCounter]);
    }
    
    printf("\nElements of arArray2 are :-\n");
    for(iCounter = 0; iCounter < iSize; iCounter ++)
    {
        printf("arArray2[%d] = %d\n", iCounter, arArray1[iCounter]);
    }

    return 0;
}

void ArrayAssignment(int arFilled[], int arBlank[], int iSize)
{   
    int iCounter;

    for(iCounter = 0; iCounter < iSize; iCounter ++)
    {
        arBlank[iCounter] = arFilled[iCounter];
    }
}

/*
OUTPUT :

Elements of arArray1 are :-
arArray1[0] = 1
arArray1[1] = 2
arArray1[2] = 3
arArray1[3] = 4
arArray1[4] = 5
arArray1[5] = 6
arArray1[6] = 7
arArray1[7] = 8

Elements of arArray2 are :-
arArray2[0] = 1
arArray2[1] = 2
arArray2[2] = 3
arArray2[3] = 4
arArray2[4] = 5
arArray2[5] = 6
arArray2[6] = 7
arArray2[7] = 8
*/