#include <stdio.h>

int main(void)
{   
    double arArray[] = {123.345, 234.456, 345.567, 456.678, 567.789};
    double *pPtr = &arArray[4];

    printf("pPtr \t= \t%d\n", pPtr);            // 6422288
    printf("*pPtr\t= \t%lf\n", *pPtr);          // 567.789000

    -- pPtr;

    printf("pPtr \t= \t%d\n", pPtr);            // 6422280
    printf("*pPtr\t= \t%lf\n", *pPtr);          // 456.678000

    return 0;
}