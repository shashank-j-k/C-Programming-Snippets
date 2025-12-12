/*
    This program demonstrates the use of a continue statement
*/

#include <stdio.h>

int main(void)
{
    int iCounter;

    for(iCounter = 1; iCounter < 10; iCounter ++)
    {
        if(iCounter %2 == 0)
            continue;
        printf("%d\n", iCounter);
    }

    return 0;
}

/* 
OUTPUT : 
1
3
5
7
9
*/