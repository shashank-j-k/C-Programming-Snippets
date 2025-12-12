#include <stdio.h>

struct demo
{
    char chChar;
    int iNo;
    double dNo;
}oObj;

int main(void)
{
    printf("Size of Object = %d", sizeof(oObj));       // 16

    return 0;
}