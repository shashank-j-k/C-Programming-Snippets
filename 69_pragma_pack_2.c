#include <stdio.h>

struct demo
{
    char chChar;
    double dNo;
};

#pragma pack (1)
int main(void)
{
    struct demo oObj;
    printf("Size of object = %d\n", sizeof(oObj));      // 16

    return 0;   
}
