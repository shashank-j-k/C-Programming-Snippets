#include <stdio.h>
#define MAX 20

int main (void)
{
    int iCounter;
    int arArray[MAX];
    int iNoOfElements;

    printf("How many Elements do you want? (less than 20)\n");
    scanf("%d", &iNoOfElements);

    for(iCounter = 0; iCounter < iNoOfElements; iCounter ++)
    {
        printf("Enter arArray[%d]\t:\t", iCounter);
        scanf("%d", &arArray[iCounter]);
    }

    printf("\nArray values are : \n\n");

    for(iCounter = 0; iCounter < iNoOfElements; iCounter ++)
    {
        printf("arArray[%d]\t:\t%d\n", iCounter, arArray[iCounter]);
    }

    return 0;
}

/*
OUTPUT:

How many Elements do you want? (less than 20)
15
Enter arArray[0]        :       2
Enter arArray[1]        :       7
Enter arArray[2]        :       3
Enter arArray[3]        :       9
Enter arArray[4]        :       12
Enter arArray[5]        :       7
Enter arArray[6]        :       23
Enter arArray[7]        :       45
Enter arArray[8]        :       98
Enter arArray[9]        :       23
Enter arArray[10]       :       6 
Enter arArray[11]       :       4
Enter arArray[12]       :       34
Enter arArray[13]       :       7
Enter arArray[14]       :       73

Array values are :        

arArray[0]      :       2 
arArray[1]      :       7 
arArray[2]      :       3 
arArray[3]      :       9 
arArray[4]      :       12
arArray[5]      :       7 
arArray[6]      :       23
arArray[7]      :       45
arArray[8]      :       98
arArray[9]      :       23
arArray[10]     :       6 
arArray[11]     :       4 
arArray[12]     :       34
arArray[13]     :       7 
arArray[14]     :       73
*/