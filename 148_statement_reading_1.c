/*     Statement Reading Task 1:
 
    SATEMENT : void **(*p)(int *, int **(*)(int *, int **))

*/

#include <stdio.h>

void **Fun(int *, int **(*)(int *, int **));
int **FunInner(int *, int **);

int main (void)
{
    int iNo1 = 10;                                                          // This number will be doubled in each function
    void **pPtr = NULL;

    int **(*p2)(int *, int **) = NULL;
    void **(*p)(int *, int **(*)(int *, int **)) = NULL;

    p = Fun;
    p2 = FunInner;

    pPtr = p(&iNo1, p2);

    // printf("Back in main from Fun\t\t:\t%d\n", (*((int *)(*pPtr))));      // if I uncomment this line I'm getting unexpected behaviour in next printf

    printf("Finally in Main\t\t\t:\t%d\n", (*((int *)(*pPtr)) * 2));      // doubling and printing the number

    return 0;
}

void **Fun(int *piNo, int **(*p2)(int *, int **))
{
    static int **ppPtr = NULL;

    ppPtr = p2(piNo, &piNo);
    printf("Coming in Fun from FunInner\t:\t%d\n", *piNo);

    *piNo = *piNo * 2;

    printf("Leaving Fun\t\t\t:\t%d\n\n", *piNo);

    return (void *)ppPtr;
}

int **FunInner(int *piNo, int **ppiNo)
{
    printf("\nComing in FunInner from main\t:\t%d\n", *piNo);

    *piNo = *piNo * 2;

    printf("Leaving from FunInner\t\t:\t%d\n\n", *piNo);

    return ppiNo;
}

/*
OUTPUT :

Coming in FunInner from main    :       10
Leaving from FunInner           :       20

Coming in Fun from FunInner     :       20
Leaving Fun                     :       40

Finally in Main                 :       80
*/