#include <stdio.h>

struct demo
{
    int iNo1;
    int iNo2;
    int iNo3;
};

int main(void)
{
    struct demo oObj;
    printf("%d %d %d\n", oObj.iNo1, oObj.iNo2, oObj.iNo3);     // 0(garbage) 3940352(garbage) 4194432(garbage)

    oObj.iNo1 = 10;
    printf("%d %d %d\n", oObj.iNo1, oObj.iNo2, oObj.iNo3);     // 10 3940352(garbage) 4194432(garbage)

    oObj.iNo2 = 20;
    printf("%d %d %d\n", oObj.iNo1, oObj.iNo2, oObj.iNo3);     // 10 20 4194432(garbage)

    oObj.iNo3 = 30;
    printf("%d %d %d", oObj.iNo1, oObj.iNo2, oObj.iNo3);       // 10 20 30

    return 0;
}