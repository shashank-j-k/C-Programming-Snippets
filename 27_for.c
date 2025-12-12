/*
    This program demonstrates the use of for statement in various forms 
    giving the same output and proving thier similarity with while and do while statements
*/

#include <stdio.h>

int main(void)
{
    int iCounter;
    int iCounter1;
    int iCounter2;

    // version 1
    for (iCounter = 0; iCounter < 3; iCounter++)
        printf("%d ", iCounter);
    // 0 1 2

    printf("\n");

    // version 2
    iCounter = 0;
    for (; iCounter < 3; iCounter++)
        printf("%d ", iCounter);
    // 0 1 2

    printf("\n");

    // version 3
    for (iCounter = 0;; iCounter++)
    {
        if (iCounter == 3)
            break;
        printf("%d ", iCounter);
    }
    // 0 1 2

    printf("\n");

    // version 4
    for (iCounter = 0; iCounter < 3;)
    {
        printf("%d ", iCounter);
        iCounter++;
    }
    // 0 1 2

    printf("\n");

    // version 5
    iCounter = 0;
    for (; iCounter < 3;)
    {
        printf("%d ", iCounter);
        iCounter++;
    }
    // 0 1 2

    printf("\n");

    // version 6
    for (iCounter1 = 0, iCounter2 = 3; iCounter1 < 3 || iCounter2 > 3; iCounter1++, iCounter2--)
    {
        printf("iCounter1 = %d\t", iCounter1);
        printf("iCounter2 = %d\n", iCounter2);
    }
    // iCounter1 = 0   iCounter2 = 3
    // iCounter1 = 1   iCounter2 = 2
    // iCounter1 = 2   iCounter2 = 1

    printf("\n");

    for (iCounter = 3; iCounter < 3; iCounter++)
        printf("%d ", iCounter);
    // No Output    
    
    return 0;
}