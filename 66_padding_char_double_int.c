#include <stdio.h>

struct demo
{
    char chChar;
    double dNo;
    int iNo;
}oObj;

int main (void)
{
    printf("Size of Object = %d", sizeof(oObj));     // 24

    return 0;
}