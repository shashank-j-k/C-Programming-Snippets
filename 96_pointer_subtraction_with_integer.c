#include <stdio.h>

int main(void)
{   
    char arArray[] = {'A', 'B', 'C', 'D', 'E'};
    char *pPtr = &arArray[4];

    printf("pPtr\t    = \t%d\n", pPtr);                 // 6422299
    printf("*pPtr\t    = \t%c\n\n", *pPtr);             // E

    printf("pPtr - 3    = \t%d\n", pPtr - 3);           // 6422296
    printf("*(pPtr - 3) = \t%c\n\n", *(pPtr - 3));      // B

    // printf("3 - pPtr    = \t%d\n", 3 - pPtr);        // error: invalid operands to binary - (have 'int' and 'char *')
    // printf("*(3 - pPtr) = \t%f\n\n", *(3 - pPtr));   // error: invalid operands to binary - (have 'int' and 'char *')

    printf("pPtr\t    = \t%d\n", pPtr);                 // 6422299
    printf("*pPtr       = \t%c\n\n", *pPtr);            // E

    return 0;
}