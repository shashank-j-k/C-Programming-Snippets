#include <stdio.h>

int main (void)
{
    int iNo1 = 0;
    int iNo2 = 1;
    int iNo3 = 2;
    int iAns;

    iAns = iNo1 && ++ iNo2 && iNo3 ++;
    printf("iNo1 = %d\niNo2 = %d\niNo3 = %d\niAns = %d", iNo1, iNo2, iNo3, iAns);

    return 0;
}

// Output
// iNo1 = 0
// iNo2 = 1
// iNo3 = 2
// iAns = 0

/*
    Explanation:

*   If any statement comes false AND operator gives output 0
*   If any of the statement comes true AND operator does not stop there and goes until the last condition before making a decision
*   It gives output 1 only when all statements come true

            iAns = iNo1 && ++ iNo2 && iNo3 ++;  here, increment operators have higher precedence and they get binded first
    hence,  iAns = iNo1 && (++ iNo2) && (iNo3 ++);  after binding, as per associativty of && operator i.e L->R
            iAns = ((0 && (++ iNo2)) && (iNo3 ++));
                            ^
                       (not executed since first operand is 0 and condition has became false)
            iAns = 0 && (iNo3 ++);
                            ^
                    again (not executed since first operand is 0 and condition has became false)
                
    hence,  iAns = 0;
            iNo1 = 0;
            iNo2 = 1;   (no change even though increment operator applied)
            iNo3 = 2;   (no change even though increment operator applied)
    
*/