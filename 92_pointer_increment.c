#include <stdio.h>

int main(void)
{   
    int arArray[] = {10, 20, 30, 40, 50};
    int *pPtr = &arArray[0];

    printf("&pPtr \t =\t%d\n", &pPtr);      // 6422280
    printf("pPtr \t  =\t%d\n", pPtr);       // 6422284
    printf("*pPtr \t =\t%d\n\n", *pPtr);    // 10

    ++ pPtr;

    printf("&pPtr \t =\t%d\n", &pPtr);      // 6422280
    printf("pPtr \t  =\t%d\n", pPtr);       // 6422288
    printf("*pPtr \t =\t%d\n\n", *pPtr);    // 20

    return 0;
}