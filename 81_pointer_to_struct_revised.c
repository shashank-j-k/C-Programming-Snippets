#include <stdio.h>

struct demo
{
    int iNo;
    float fNo;
};

void Scan(struct demo *);
void Print(const struct demo *);

int main (void)
{
    struct demo oObj;

    Scan(&oObj);
    Print(&oObj);

    return 0;
}

/*
OUTPUT:

Enter a Integer  :      45
Enter Float      :      54.1845

Integer is      :       45
Float is        :       54.184502

*/

void Scan(struct demo *pPtr)
{
    printf("Enter a Integer  :\t");
    scanf("%d", &pPtr->iNo);
    printf("Enter Float\t :\t");
    scanf("%f",&(*pPtr).fNo);
}

void Print(const struct demo *pPtr)
{
    printf("\nInteger is \t:\t%d\n", (*pPtr).iNo);
    printf("Float is  \t:\t%f", pPtr->fNo);
}