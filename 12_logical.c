#include <stdio.h>

int main (void)
{
    printf("1 && 0 = %d\n", 1 && 0);          // 0
    printf("0 && 1 = %d\n", 0 && 1);          // 0
    printf("1 && 1 = %d\n", 1 && 1);          // 1
    printf("1 || 1 = %d\n", 1 || 1);          // 1
    printf("1 || 0 = %d\n", 1 || 0);          // 1
    printf("0 || 0 = %d\n", 0 || 0);          // 0
    printf("!1     = %d\n\n", !1);            // 0

    printf("10 && 20   = %d\n", 10 && 20);    // 1
    printf("10 && -20  = %d\n", 10 && -20);   // 1
    printf("0 && -20   = %d\n", 0 && -20);    // 0
    printf("-10 || -20 = %d\n", -10 || -20);  // 1
    printf("-10 || 20  = %d\n", -10 || 20);   // 1
    printf("-10 || 0   = %d\n\n", -10 || 0);    // 1
    
    printf("!10        = %d\n", !10);         // 0
    printf("!-10       = %d\n", !-10);        // 0

    return 0;
}

/*
    Logical operators consider the operands as either :
        0 (operands having value zero) or 
        1 (operands having any non zero value wither positive or negative)
    as they work on  truth tables
    and return the result in boolean form i.e(1/true/yes  OR 0/false/no)
    
*/
