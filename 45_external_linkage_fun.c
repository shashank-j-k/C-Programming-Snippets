#include <stdio.h>

int g_iNo = 10;

void Fun(void)
{
    printf("In Fun, %d at %p\n", g_iNo, &g_iNo);    // // In Fun, 10 at 00404004
}
