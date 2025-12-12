/*
    This program demonstrates the use of while statement and its limitation
*/

#include <stdio.h>

int main(void)
{
    int iCounter = 0;

    while (iCounter < 3)
    {
        printf("%d ", iCounter);
        iCounter ++;       
    }
    // 0 1 2

    iCounter = 3;

    while (iCounter < 3)
    {
        printf("%d", iCounter);
        iCounter ++;       
    }
    // no output

    return 0;
}