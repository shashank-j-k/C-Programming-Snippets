#include <stdio.h>

void Fun(void);
static int g_iNo = 20;  

int main(void)
{           
    // extern int g_iNo;                            // declaration removed, no error

    printf("In main, %d at %d\n", g_iNo, &g_iNo);   // In main, 20 at 4210696
    Fun();                                          // In Fun, 10 at 4210692

    return 0;
}

                