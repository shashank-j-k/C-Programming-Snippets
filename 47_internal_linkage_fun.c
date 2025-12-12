#include <stdio.h>

static int g_iNo = 10;

void Fun(void)
{
    printf("In Fun, %d at %d\n", g_iNo, &g_iNo);    // In Fun, 10 at 4210692
}
