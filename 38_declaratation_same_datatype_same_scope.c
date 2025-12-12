#include <stdio.h>

int main(void)
{
    extern int g_iNo;          // declaration
    extern int g_iNo;          // allowed

    printf("%d ", g_iNo);      // 18
    return 0;
}

int g_iNo = 18;                // definition

