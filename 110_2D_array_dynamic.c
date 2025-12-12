#include <stdio.h>
#include <malloc.h>

void FreeMemory(int **, int);

int main(void)
{
    int iRows;
    int iColoumns;
    int iCounter1;
    int iCounter2;
    int **ppPtr = NULL;

    printf("Enter number of Rows\t\t:\t");
    scanf("%d", &iRows);

    printf("Enter number of Coloumns\t:\t");
    scanf("%d", &iColoumns);

    printf("\n");

    ppPtr = (int **)malloc(iRows * sizeof(int *));

    if (NULL == ppPtr)
    {
        printf("Memory Allocation Failed\n\a");
        return -1;
    }

    for (iCounter1 = 0; iCounter1 < iRows; iCounter1++)
    {
        ppPtr[iCounter1] = (int *)malloc(iColoumns * sizeof(int));

        if (NULL == ppPtr[iCounter1])
        {
            printf("Memory Allocation Failed\n\a");
            FreeMemory(ppPtr, iCounter1);
        }

        for (iCounter2 = 0; iCounter2 < iColoumns; iCounter2++)
        {
            printf("Enter element ppPtr[%d][%d]\t:\t", iCounter1, iCounter2);
            scanf("%d", &ppPtr[iCounter1][iCounter2]);
        }
        printf("\n");
    }

    printf("______________________________________\n");

    printf("Array elements are :-\n\n");
    for (iCounter1 = 0; iCounter1 < iRows; iCounter1++)
    {
        for (iCounter2 = 0; iCounter2 < iColoumns; iCounter2++)
        {
            printf("ppPtr[%d][%d]\t:\t%d\n", iCounter1, iCounter2, ppPtr[iCounter1][iCounter2]);
        }
        printf("\n");
    }

    FreeMemory(ppPtr, iRows);

    return 0;
}

void FreeMemory(int **ppPtr, int iLimit)
{
    int iCounter;
    if (ppPtr != NULL)
    {
        for (iCounter = 0; iCounter < iLimit; iCounter++)
        {
            if (ppPtr[iCounter] != NULL)
            {
                free(ppPtr[iCounter]);
                ppPtr[iCounter] = NULL;
            }
        }
        
        free(ppPtr);
        ppPtr = NULL;
        // printf("Memory Freed Successfully\n");
    }
}

/*
OUTPUT :

Enter number of Rows            :    5
Enter number of Coloumns        :    5

Enter element ppPtr[0][0]       :    1
Enter element ppPtr[0][1]       :    2
Enter element ppPtr[0][2]       :    5
Enter element ppPtr[0][3]       :    2
Enter element ppPtr[0][4]       :    3

Enter element ppPtr[1][0]       :    12
Enter element ppPtr[1][1]       :    87
Enter element ppPtr[1][2]       :    34
Enter element ppPtr[1][3]       :    56
Enter element ppPtr[1][4]       :    29

Enter element ppPtr[2][0]       :    145
Enter element ppPtr[2][1]       :    187
Enter element ppPtr[2][2]       :    423
Enter element ppPtr[2][3]       :    198
Enter element ppPtr[2][4]       :    348

Enter element ppPtr[3][0]       :    209
Enter element ppPtr[3][1]       :    890
Enter element ppPtr[3][2]       :    273
Enter element ppPtr[3][3]       :    712
Enter element ppPtr[3][4]       :    261

Enter element ppPtr[4][0]       :    888
Enter element ppPtr[4][1]       :    777
Enter element ppPtr[4][2]       :    222
Enter element ppPtr[4][3]       :    444
Enter element ppPtr[4][4]       :    555

______________________________________
Array elements are :-

ppPtr[0][0]     :       1
ppPtr[0][1]     :       2
ppPtr[0][2]     :       5
ppPtr[0][3]     :       2
ppPtr[0][4]     :       3

ppPtr[1][0]     :       12
ppPtr[1][1]     :       87
ppPtr[1][2]     :       34
ppPtr[1][3]     :       56
ppPtr[1][4]     :       29

ppPtr[2][0]     :       145
ppPtr[2][1]     :       187
ppPtr[2][2]     :       423
ppPtr[2][3]     :       198
ppPtr[2][4]     :       348

ppPtr[3][0]     :       209
ppPtr[3][1]     :       890
ppPtr[3][2]     :       273
ppPtr[3][3]     :       712
ppPtr[3][4]     :       261

ppPtr[4][0]     :       888
ppPtr[4][1]     :       777
ppPtr[4][2]     :       222
ppPtr[4][3]     :       444
ppPtr[4][4]     :       555
*/