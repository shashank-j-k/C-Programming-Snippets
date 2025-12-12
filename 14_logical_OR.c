#include <stdio.h>

int main (void)
{
    int iNo1 = 0;
    int iNo2 = 1;
    int iNo3 = 2;
    int iAns;

    iAns = iNo1 && ++ iNo2 || iNo3 ++;
    printf("iNo1 = %d\niNo2 = %d\niNo3 = %d\niAns = %d", iNo1, iNo2, iNo3, iAns);

    return 0;
}

// Output
// iNo1 = 0
// iNo2 = 1
// iNo3 = 3
// iAns = 1

/*
    Explanation:

*   If any statement comes true OR operator gives output 1
*   If any of the statement comes true OR operator does not stops there and gives output 1
*   It gives output 0 only when all statements are false

            iAns = iNo1 && ++ iNo2 || iNo3 ++;  here, increment operators have higher precedence and they get binded first
    hence,  iAns = iNo1 && (++ iNo2) || (iNo3 ++);  after binding, as precedence of && is higher than || and associativty of logical operator i.e L->R
            iAns = ((0 && (++ iNo2)) || (iNo3 ++));
                            ^
                       (not executed since first operand is 0 and condition has became false)
            iAns = 0 || (iNo3 ++);
            iAns = 0 || 3
            iAns = 1
                
    hence,  iAns = 1;
            iNo1 = 0;
            iNo2 = 1;   (no change even though increment operator applied)
            iNo3 = 3;   (incremented from 2 to 3)
    
*/