#include <stdio.h>

void Fun(void);

int main (void) 
{
    extern int g_iNo;

    printf("In main, %d at %p\n", g_iNo, &g_iNo);   // In main, 10 at 00404004
    Fun();                                          // In Fun, 10 at 00404004

    return 0;
}
