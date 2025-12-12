#include <stdio.h>

int main(void)
{   
    int arArray[] = {10, 20, 30, 40, 50};
    int *pPtr1 = &arArray[0];
    int *pPtr2 = &arArray[4];

    printf("pPtr1\t    = \t%d\n", pPtr1);                  // 6422276
    printf("pPtr2\t    = \t%d\n", pPtr2);                  // 6422292
    // printf("pPtr1 + pPtr2    = \t%d\n", pPtr1 + pPtr2); // error: invalid operands to binary + (have 'int *' and 'int *')

    return 0;
}