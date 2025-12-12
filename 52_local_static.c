#include <stdio.h>

void Fun1(void);
void Fun2(void);

int main(void)
{
    int iCounter;

    for(iCounter = 0; iCounter < 3; iCounter ++)
        Fun1();

    for(iCounter = 0; iCounter < 3; iCounter ++)
        Fun2();

    return 0;
}

/*
OUTPUT: 
    In Fun1 :       11
    In Fun1 :       11
    In Fun1 :       11
    In Fun2 :       11
    In Fun2 :       12
    In Fun2 :       13
*/

void Fun1(void)
{
    int iNo =10;
    iNo++;
    printf("In Fun1 :\t%d\n", iNo);
}

void Fun2(void)
{
    static int iNo =10;
    iNo++;
    printf("In Fun2 :\t%d\n", iNo);
}