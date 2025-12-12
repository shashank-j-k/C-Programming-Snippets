/*
    STATEMENT :         void (*(*p())[3])()
*/

#include <stdio.h>

void (*(*Fun())[3])();
void Fun1(void);
void Fun2(void);
void Fun3(void);


int main(void)
{
    void (*(*pPtr)[3])() = NULL;

    pPtr = Fun();
    
    return 0;
}

/*
OUTPUT :

In Fun1
In Fun2
In Fun3
*/


void (*(*Fun())[3])()
{
    static void (*arArray[3])();
    int iCounter;

    arArray[0] = Fun1;
    arArray[1] = Fun2;
    arArray[2] = Fun3;

    for(iCounter = 0; iCounter < 3; iCounter ++)
    {
        arArray[iCounter]();
    }

    return &arArray;
}

void Fun1(void)
{
    printf("In Fun1\n");
}

void Fun2(void)
{
    printf("In Fun2\n");
}

void Fun3(void)
{
    printf("In Fun3\n");
}