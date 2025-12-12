#include <stdio.h>

int main(void)
{
    int iAns;

    iAns = 2 * 3.25 + (7/3);      

    printf("2 * 3.25 + (7/3) = %d", iAns);             // 8

    return 0;
}

/*
    iAns = 2 * 3.25 + (7/3)
         = ((2 * 3.25) + (7/3))     // promotion of 2 to 2.00
         = 6.5 + (7/3)              
         = 6.5 + 2                  // promotion of 2 to 2.00
         = 8.5
         = 8                        // demotion of 8.5 to 8.00
*/