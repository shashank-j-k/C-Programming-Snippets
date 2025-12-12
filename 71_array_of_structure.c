#include <stdio.h>
#define MAX 3

struct demo
{
    int iNo;
    float fNo;
};

int main (void)
{
    int iCounter;
    struct demo arArray[MAX];

    for(iCounter = 0; iCounter < MAX; iCounter ++)
    {
        printf("Enter Object%d values\t:-\n", iCounter + 1);

        printf("Enter Integer value\t:\t");
        scanf("%d", &arArray[iCounter].iNo);

        printf("Enter Float value\t:\t");
        scanf("%f", &arArray[iCounter].fNo);
    }
    printf("\n");
    for(iCounter = 0; iCounter < MAX; iCounter ++)
    {
        printf("Object %d values are :\n", iCounter + 1);
        printf("\t Integer is :\t%d\n", arArray[iCounter].iNo);
        printf("\t   Float is :\t%f\n", arArray[iCounter].fNo);
    }
}

/*
OUTPUT:

Enter Object1 values    :-
Enter Integer value     :       4
Enter Float value       :       4.5
Enter Object2 values    :-
Enter Integer value     :       9
Enter Float value       :       6.3
Enter Object3 values    :-
Enter Integer value     :       81
Enter Float value       :       1.8

Object 1 values are :-
         Integer is :   4
           Float is :   4.500000
Object 2 values are :
         Integer is :   9
           Float is :   6.300000
Object 3 values are :
         Integer is :   81
           Float is :   1.800000
*/