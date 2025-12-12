#include <stdio.h>

int main(void)
{
    int arArray[5] = {10, 20, 30, 40, 50};
    int *arPointer[5] = {arArray, arArray + 1, arArray + 2, arArray + 3, arArray + 4};
    int **ppPtr = arPointer;

    printf("%d %d %d\n", arArray, *arArray, &arArray);                      // 6422280 10 6422280
    printf("%d %d %d\n", arPointer, *arPointer, **arPointer);               // 6422260 6422280 10
    printf("%d %d %d\n", ppPtr, *ppPtr, **ppPtr);                           // 6422260 6422280 10

    *++ppPtr;
    printf("%d %d %d\n", ppPtr - arPointer, *ppPtr - arArray, **ppPtr);     // 1 1 20

    *ppPtr++;
    printf("%d %d %d\n", ppPtr - arPointer, *ppPtr - arArray, **ppPtr);     // 2 2 30

    ++*ppPtr;
    printf("%d %d %d\n", ppPtr - arPointer, *ppPtr - arArray, **ppPtr);     // 2 3 40

    return 0;
}