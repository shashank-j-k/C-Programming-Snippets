#include <stdio.h>

extern int g_iNo;

int main(void)
{
    extern int g_iNo;              // allowed

    printf("%d ", g_iNo);          // 10    

    return 0;
}

int g_iNo = 10;

