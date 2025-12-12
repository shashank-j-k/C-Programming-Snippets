#include <stdio.h>

struct demo
{
    int iNo;
    float fNo;
};

void Scan(struct demo *);
void Print(struct demo);

int main (void)
{
    struct demo oObj;

    Scan(&oObj);
    Print(oObj);

    return 0;
}

/*
OUTPUT:

Enter a Integer  :      67
Enter Float      :      56.76

Integer is      :       67
Float is        :       56.759998

*/

void Scan(struct demo *pPtr)
{
    printf("Enter a Integer  :\t");
    scanf("%d", &pPtr->iNo);
    printf("Enter Float\t :\t");
    scanf("%f",&(*pPtr).fNo);
}

void Print(struct demo oObj)
{
    printf("\nInteger is \t:\t%d\n", oObj.iNo);
    printf("Float is  \t:\t%f", oObj.fNo);
}

