#include <stdio.h>
#include <malloc.h>

int main (void)
{
    int *pPtr;
    int iCounter;
    int iNoOfElements;

    printf("Enter how many elements you want\t:\t");
    scanf("%d", &iNoOfElements);

    pPtr =(int *) malloc (iNoOfElements * sizeof(int));

    if(NULL == pPtr)
    {
        printf("Memory allocation FAILED\a\n");
        return -1;
    }

    for(iCounter = 0; iCounter < iNoOfElements; iCounter ++)
    {
        printf("Enter pPtr[%d]\t:\t", iCounter);
        scanf("%d", &pPtr[iCounter]);
    }

    printf("\nArray values are : \n\n");

    for(iCounter = 0; iCounter < iNoOfElements; iCounter ++)
    {
        printf("pPtr[%d]\t:\t%d\n", iCounter, pPtr[iCounter]);
    }

    if(pPtr != NULL)
    {
        free(pPtr);
        pPtr = NULL;
    }

    return 0;
}

/*
OUTPUT:

Enter how many elements you want        :       9
Enter pPtr[0]   :       1
Enter pPtr[1]   :       4
Enter pPtr[2]   :       7
Enter pPtr[3]   :       3
Enter pPtr[4]   :       8
Enter pPtr[5]   :       4
Enter pPtr[6]   :       3 
Enter pPtr[7]   :       9
Enter pPtr[8]   :       2

Array values are :

pPtr[0] :       1
pPtr[1] :       4
pPtr[2] :       7
pPtr[3] :       3
pPtr[4] :       8
pPtr[5] :       4
pPtr[6] :       3
pPtr[7] :       9
pPtr[8] :       2
*/