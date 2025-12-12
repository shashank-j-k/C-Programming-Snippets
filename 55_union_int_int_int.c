#include <stdio.h>

union demo
{
    int iNo1;
    int iNo2;
    int iNo3;
};

int main(void)
{
    union demo oObj;
    printf("%d %d %d\n", oObj.iNo1, oObj.iNo2, oObj.iNo3); // 4194432(garbage) 4194432(garbage) 4194432(garbage)

    oObj.iNo1 = 10;
    printf("%d %d %d\n", oObj.iNo1, oObj.iNo2, oObj.iNo3); // 10 10 10

    oObj.iNo2 = 20;
    printf("%d %d %d\n", oObj.iNo1, oObj.iNo2, oObj.iNo3); // 20 20 20

    oObj.iNo3 = 30;
    printf("%d %d %d", oObj.iNo1, oObj.iNo2, oObj.iNo3);   // 30 30 30

    return 0;
}