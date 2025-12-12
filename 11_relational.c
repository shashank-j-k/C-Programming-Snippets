#include <stdio.h>

int main (void)
{
    printf("10 < 20  : %d\n", 10 < 20);      // 1
    printf("20 < 10  : %d\n", 20 < 10);      // 0
    printf("20 <= 10 : %d\n", 20 <= 10);     // 0
    printf("10 <= 10 : %d\n", 10 <= 10);     // 1
    printf("20 > 10  : %d\n", 20 > 10);      // 1
    printf("10 >= 20 : %d\n", 10 >= 20);     // 0
    printf("10 == 20 : %d\n", 10 == 20);     // 0
    printf("10 != 10 : %d\n", 10 != 10);     // 0
    printf("10 != 20 : %d\n", 10 != 20);     // 1

    printf("10 <= 10 != 1 : %d\n", 10 <= 10 != 1);     // 0
    printf("20 < 10 != 0  : %d\n", 20 < 10 != 0);      // 0
    printf("20 > 10 != 0  : %d\n", 20 > 10 != 0);      // 1

    return 0;
}

/*
    Relational operators compares the operands and gives their result in boolean values :
        i.e(1/true/yes  OR 0/false/no)
    
*/