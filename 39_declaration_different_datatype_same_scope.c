#include <stdio.h>

int main(void)
{
    extern int g_iNo;
    // extern float g_iNo;          // error: conflicting types for 'g_iNo'

    printf("%d ", g_iNo);          // 20

    return 0;
}

int g_iNo = 20;

