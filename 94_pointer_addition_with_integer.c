#include <stdio.h>

int main(void)
{   
    float arArray[] = {123.345f, 234.456f, 345.567f, 456.678f, 567.789f};
    float *pPtr = &arArray[0];

    printf("pPtr\t    = \t%d\n", pPtr);             // 6422280
    printf("*pPtr\t    = \t%f\n\n", *pPtr);         // 123.345001

    printf("pPtr + 3    = \t%d\n", pPtr + 3);       // 6422292
    printf("*(pPtr + 3) = \t%f\n\n", *(pPtr + 3));  // 456.678009

    printf("3 + pPtr    = \t%d\n", 3 + pPtr);       // 6422292
    printf("*(3 + pPtr) = \t%f\n\n", *(3 + pPtr));  // 456.678009

    printf("pPtr\t    = \t%d\n", pPtr);             // 6422280
    printf("*pPtr       = \t%f\n\n", *pPtr);        // 123.345001

    return 0;
}