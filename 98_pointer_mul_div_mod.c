#include <stdio.h>

int main(void)
{   
    int arArray[] = {10, 20, 30, 40, 50};
    int *pPtr1 = &arArray[0];
    int *pPtr2 = &arArray[4];

    // printf("pPtr1\t\t = \t%d\n", pPtr1 * 3);            // error: invalid operands to binary * (have 'int *' and 'int')
    // printf("pPtr2\t\t = \t%d\n\n", pPtr1 * pPtr2);      // error: invalid operands to binary * (have 'int *' and 'int *')

    // printf("pPtr1\t\t = \t%d\n", pPtr1 / 3);            // error: invalid operands to binary / (have 'int *' and 'int')
    // printf("pPtr2\t\t = \t%d\n\n", pPt1 / pPtr2);       // error: 'pPt1' undeclared (first use in this function)
    
    // printf("pPtr1\t\t = \t%d\n", pPtr1 % 3);            // error: invalid operands to binary % (have 'int *' and 'int')
    // printf("pPtr2\t\t = \t%d\n\n", pPtr1 % pPtr2);      // error: invalid operands to binary % (have 'int *' and 'int *')

    return 0;
}