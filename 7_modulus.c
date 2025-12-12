#include <stdio.h>

int main(void)
{
    printf("%d % %d = %d\n", 9, 2, 9 % 2);      // 9 %d = 2
    printf("%d %% %d = %d\n", 9, 2, 9 % 2);     // 9 % 2 = 1
    printf("%d %% %d = %d\n", 9, -2, 9 % -2);   // 9 % -2 = 1  
    printf("%d %% %d = %d\n", -9, 2, -9 % 2);   // -9 % 2 = -1
    printf("%d %% %d = %d\n", -9, -2, -9 % -2); // -9 % -2 = -1

    // printf("%f %% %d = %f\n", 9.5, 2, 9.5 % 2);      // error: invalid operands to binary %

    return 0;
}

/*
    Note : to print '%', we need write '%%' inside printf statement

    Modulus operation gives the remainder
    Sign of remainder depends on numerator only

    (+) % (+) = (+)
    (+) % (-) = (+)
    (-) % (+) = (-)
    (-) % (-) = (-)

    Modulus operation can be performed only on integers
*/