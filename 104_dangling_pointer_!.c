#include <stdio.h>

int main(void)
{
    int *pPtr = NULL;
    {
        int iNo = 10;
        pPtr = &iNo;

        printf("Inside block  : *pPtr\t=\t%d\n", *pPtr);    // 10
    }

    printf("Outside block : *pPtr\t=\t%d\n", *pPtr);        // 10 (dangling pointer - program might crash)

    return 0;
}