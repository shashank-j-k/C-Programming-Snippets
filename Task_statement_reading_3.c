
/*
    STATEMENT :-            int *(*(*arArray[3])())();
*/

#include <stdio.h>

int *(*Fun1())();
int *(*Fun2())();
int *(*Fun3())();
int *Fun11(void);
int *Fun22(void);
int *Fun33(void);

int main(void)
{
    int iCounter;
    int *pPtr2 = NULL;
    int *(*(*arArray[3])())();
    int *(*fpPtr)();

    arArray[0] = Fun1;
    arArray[1] = Fun2;
    arArray[2] = Fun3;

    for(iCounter = 0; iCounter < 3; iCounter ++)
    {
        fpPtr = arArray[iCounter]();
        pPtr2 = fpPtr();
        printf("%d - %d\n", iCounter + 1, *pPtr2);
    }
}

/*
OUTPUT :

1 - 50
2 - 60
3 - 70
-------------------------------------------
OUTPUT : (if commented lines are uncommented)
Fun11 : Enter a number :        50
1 - 50
Fun22 : Enter a number :        60
2 - 60
Fun33 : Enter a number :        70
3 - 70
*/

int *Fun11(void)
{
    static int iNo = 50;

    // printf("Fun11 : Enter a number :\t");
    // scanf("%d", &iNo);

    return &iNo;
}

int *Fun22(void)
{
    static int iNo = 60;

    // printf("Fun22 : Enter a number :\t");
    // scanf("%d", &iNo);

    return &iNo;
}

int *Fun33(void)
{
    static int iNo = 70;

    // printf("Fun33 : Enter a number :\t");
    // scanf("%d", &iNo);

    return &iNo;
}

int *(*Fun1())()
{
    int *(*fpPtr1)() =  NULL;

    fpPtr1 = Fun11;

    return fpPtr1;
}

int *(*Fun2())()
{
    int *(*fpPtr2)() =  NULL;

    fpPtr2 = Fun22;

    return fpPtr2;
}

int *(*Fun3())()
{
    int *(*fpPtr3)() =  NULL;

    fpPtr3 = Fun33;

    return fpPtr3;
}