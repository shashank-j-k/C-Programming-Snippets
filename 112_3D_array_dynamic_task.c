#include <stdio.h>
#include <malloc.h>

void FreeMemory(int ***, int, int);

int main(void)
{
    int iRows;
    int iPlanes;
    int iColoumns;
    int iCounter1;
    int iCounter2;
    int iCounter3;
    int ***pppPtr = NULL;

    printf("Enter number of Planes\t\t:\t");
    scanf("%d", &iPlanes);

    printf("Enter number of Rows\t\t:\t");
    scanf("%d", &iRows);

    printf("Enter number of Coloumns\t:\t");
    scanf("%d", &iColoumns);

    printf("\n");

    pppPtr = (int ***)malloc(iPlanes * sizeof(int **));

    if (NULL == pppPtr)
    {
        printf("Memory Allocation Failed\n\a");
        return -1;
    }

    for (iCounter1 = 0; iCounter1 < iPlanes; iCounter1++)
    {
        pppPtr[iCounter1] = (int **)malloc(iRows * sizeof(int *));

        if (NULL == pppPtr[iCounter1])
        {
            printf("Memory Allocation Failed\n\a");
            FreeMemory(pppPtr, iCounter1, 0);
        }

        for (iCounter2 = 0; iCounter2 < iRows; iCounter2++)
        {
            pppPtr[iCounter1][iCounter2] = (int *)malloc(iColoumns * sizeof(int));

            if (NULL == pppPtr[iCounter1][iCounter2])
            {
                printf("Memory allocation FAILED\n\a");
                FreeMemory(pppPtr, iCounter1, iCounter2);
            }

            for (iCounter3 = 0; iCounter3 < iColoumns; iCounter3++)
            {
                printf("Enter element pppPtr[%d][%d][%d]\t:\t", iCounter1, iCounter2, iCounter3);
                scanf("%d", &pppPtr[iCounter1][iCounter2][iCounter3]);
            }
        }
        printf("\n");
    }

    // PRINTING ARRAY ELEMENTS

    printf("___________________________________________\n");

    printf("Array elements are :-\n\n");
    for (iCounter1 = 0; iCounter1 < iPlanes; iCounter1++)
    {
        for (iCounter2 = 0; iCounter2 < iRows; iCounter2++)
        {
            for (iCounter3 = 0; iCounter3 < iColoumns; iCounter3++)
            {
                printf("pppPtr[%d][%d][%d]\t\t:\t%d\n", iCounter1, iCounter2, iCounter3, pppPtr[iCounter1][iCounter2][iCounter3]);
            }
            printf("\n");
        }
        printf("\n");
    }

    // FREEING ALLOCATED MEMORY

    FreeMemory(pppPtr, iRows, iColoumns);

    return 0;
}

void FreeMemory(int ***pppPtr, int iRowCounter, int iColoumnCounter)
{
    int iCounter1;
    int iCounter2;
    if (pppPtr != NULL)
    {
        for (iCounter1 = 0; iCounter1 < iRowCounter; iCounter1++)
        {
            if (pppPtr[iCounter1] != NULL)
            {
                for (iCounter2 = 0; iCounter2 < iColoumnCounter; iCounter2++)
                {
                    if (NULL != pppPtr[iCounter1][iCounter2])
                    {
                        free(pppPtr[iCounter1][iCounter2]);
                        pppPtr[iCounter1][iCounter2] = NULL;
                    }
                }

                free(pppPtr[iCounter1]);
                pppPtr[iCounter1] = NULL;
            }
        }

        free(pppPtr);
        pppPtr = NULL;
        printf("Memory Freed Successfully\n");
    }
}
/*
OUTPUT :
Enter number of Planes          :    2
Enter number of Rows            :    3
Enter number of Coloumns        :    4

Enter element pppPtr[0][0][0]   :    7
Enter element pppPtr[0][0][1]   :    4
Enter element pppPtr[0][0][2]   :    2
Enter element pppPtr[0][0][3]   :    7
Enter element pppPtr[0][1][0]   :    10
Enter element pppPtr[0][1][1]   :    12
Enter element pppPtr[0][1][2]   :    14
Enter element pppPtr[0][1][3]   :    15
Enter element pppPtr[0][2][0]   :    23
Enter element pppPtr[0][2][1]   :    21
Enter element pppPtr[0][2][2]   :    26
Enter element pppPtr[0][2][3]   :    28

Enter element pppPtr[1][0][0]   :    30
Enter element pppPtr[1][0][1]   :    34
Enter element pppPtr[1][0][2]   :    36
Enter element pppPtr[1][0][3]   :    31
Enter element pppPtr[1][1][0]   :    48
Enter element pppPtr[1][1][1]   :    45
Enter element pppPtr[1][1][2]   :    42
Enter element pppPtr[1][1][3]   :    44
Enter element pppPtr[1][2][0]   :    59
Enter element pppPtr[1][2][1]   :    52
Enter element pppPtr[1][2][2]   :    58
Enter element pppPtr[1][2][3]   :    51

___________________________________________
Array elements are :-

pppPtr[0][0][0]         :       7
pppPtr[0][0][1]         :       4
pppPtr[0][0][2]         :       2
pppPtr[0][0][3]         :       7

pppPtr[0][1][0]         :       10
pppPtr[0][1][1]         :       12
pppPtr[0][1][2]         :       14
pppPtr[0][1][3]         :       15

pppPtr[0][2][0]         :       23
pppPtr[0][2][1]         :       21
pppPtr[0][2][2]         :       26
pppPtr[0][2][3]         :       28


pppPtr[1][0][0]         :       30
pppPtr[1][0][1]         :       34
pppPtr[1][0][2]         :       36
pppPtr[1][0][3]         :       31

pppPtr[1][1][0]         :       48
pppPtr[1][1][1]         :       45
pppPtr[1][1][2]         :       42
pppPtr[1][1][3]         :       44

pppPtr[1][2][0]         :       59
pppPtr[1][2][1]         :       52
pppPtr[1][2][2]         :       58
pppPtr[1][2][3]         :       51

*/