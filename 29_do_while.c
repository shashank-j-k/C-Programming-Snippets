/*
    This program demonstrates the use of do while statement and how it differs from a while statement
*/

#include <stdio.h>

int main(void)  
{
    int iCounter = 0;

    do
    {
        printf("%d ", iCounter);
        iCounter ++;       
    } while (iCounter < 3);                 // 0 1 2

    do
    {
        printf("\n%d ", iCounter);
        iCounter ++;       
    } while (iCounter < 3);                 // 3        (Note : no output if while statement used here)

    return 0;
}