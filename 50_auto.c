#include <stdio.h>

int main(void)
{
    int iNo1;
    auto int iNo2;

    printf("iNo1 =\t%d\niNo2 =\t%d", iNo1, iNo2);    

    return 0;
}

/*
OUTPUT:
    iNo1 =  4194432 (garbage)
    iNo2 =  3371008 (garbage)
*/