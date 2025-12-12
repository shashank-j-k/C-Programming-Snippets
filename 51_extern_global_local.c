#include <stdio.h>

int g_iNo1;                                 // definition, extern
int g_iNo2 = 10;                            // definition, extern
extern int g_iNo3;                          // declaration          
extern int g_iNo4 = 20;                     // definition, extern   warning: 'g_iNo4' initialized and declared 'extern'

int main(void)
{
    int iNo1;                               // definition, auto
    int iNo2 = 30;                          // definition, auto
    extern int iNo3;                        // declaration
    // extern int iNo4 = 40;                // error: 'iNo4' has both 'extern' and initializer

    printf("g_iNo1 = %d\n", g_iNo1);        // 0
    printf("g_iNo2 = %d\n", g_iNo2);        // 10
    // printf("g_iNo3 = %d\n", g_iNo3);     // undefined reference to `g_iNo3'
    printf("g_iNo4 = %d\n", g_iNo4);        // 20

    printf("iNo1   = %d\n", iNo1);          // 2555904 (garbage)
    printf("iNo2   = %d\n", iNo2);          // 30
    // printf("iNo3 = %d\n", iNo3);         //undefined reference to `iNo3'
    // printf("iNo4 = %d", iNo4);
    
}