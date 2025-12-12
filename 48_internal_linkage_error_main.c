#include <stdio.h>

void Fun(void);

int main(void)
{
    extern int g_iNo;                               //note: previous declaration of 'g_iNo' was here

    printf("In main, %d at %d\n", g_iNo, &g_iNo);   // In main, 10 at 4210692 
    Fun();                                          // In Fun, 10 at 4210692

    return 0;
}

// static int g_iNo = 20;                            // error: static declaration of 'g_iNo' follows non-static declaration