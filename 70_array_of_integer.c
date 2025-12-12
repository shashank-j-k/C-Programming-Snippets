#include <stdio.h>
#define MAX 3

int main (void)
{
    int iCounter;
    int arArray[MAX];

    for(iCounter = 0; iCounter < MAX; iCounter ++)
    {
        printf("Enter Number %d element :\t", iCounter + 1);
        scanf("%d", &arArray[iCounter]);
    }

    for(iCounter = 0; iCounter < MAX; iCounter ++)
    {
        printf("Number %d element is    :\t%d\n", iCounter + 1, arArray[iCounter]);
    }

    return 0;
}

/*
OUTPUT :

Enter Number 1 element :        12
Enter Number 2 element :        23
Enter Number 3 element :        34
Number 1 element is    :        12
Number 2 element is    :        23
Number 3 element is    :        34
*/