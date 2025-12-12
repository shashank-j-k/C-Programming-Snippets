#include <stdio.h>

int Fun(void);

int main (void)
{
    int iAns1, iAns2, iAns3;             // separator
    iAns1 = 10, 20, 30;                  // opertaor
    iAns2 = (10, 20, 30);                // operator

    printf("iAns1 = %d, iAns2 = %d\n", iAns1, iAns2);     // iAns1 = 10, iAns2 = 30

    iAns3 = Fun();

    printf("Fun returned %d", iAns3);   // Fun returned 0
    return 0;
}

int Fun(void)
{
    return 1, -1, 0;                    // operator
}

/*

    Associativity of a comma operator is from L->R
    Every comma used in our program is not an operator. It can be a seperator. 
    Comma operator has lowest precedence 
*/