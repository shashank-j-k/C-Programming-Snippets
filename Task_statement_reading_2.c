/*  
    STATEMENT :-        int (*(*p[3])())[2]
*/

#include <stdio.h>

int (*Fun1())[2];
int (*Fun2())[2];
int (*Fun3())[2];

int main(void)
{
    int iCounter1;
    int iCounter2;
    int (*(*arr[3])())[2];
    int(*pPtr)[2] = NULL;

    arr[0] = Fun1;
    arr[1] = Fun2;
    arr[2] = Fun3;

    for(iCounter1 = 0; iCounter1 < 3; iCounter1 ++)
    {
        pPtr = arr[iCounter1]();
        for(iCounter2 = 0; iCounter2 < 2; iCounter2 ++)
        {
            printf("%d\t", (*pPtr)[iCounter2]);
        }
        printf("\n");
    }

    return 0;
}
/*
OUTPUT :

10      20
40      50
60      70
*/

int (*Fun1())[2]
{
    static int arArray[2] = {10, 20};

    return &arArray;
}

int (*Fun2())[2]
{
    static int arArray[2] = {40, 50};

    return &arArray;
}

int (*Fun3())[2]
{
    static int arArray[2] = {60, 70};

    return &arArray;
}