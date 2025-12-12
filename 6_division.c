#include <stdio.h>

int main(void)
{
    printf("%d / %d = %d\n", 9, 2, 9/2);        // 9 / 2 = 4
    printf("%d / %d = %d\n", 9, -2, 9/-2);      // 9 / -2 = -4
    printf("%d / %d = %d\n", -9, 2, -9/2);      // -9 / 2 = -4
    printf("%d / %d = %d\n", -9, -2, -9/-2);    // -9 / -2 = 4

    printf("%f / %d = %f\n", 9.5, 2, 9.5/2);    // 9.500000 / 2 = 4.750000
    printf("%f / %f = %f\n", 9.5, 2, 9.5/2);    // 9.500000 / 0.000000 = 0.000000   (wrong format specifier gives wrong result, no error)
    printf("%f / %f = %d\n", 9.5, 2, 9.5/2);    // 0 / 1076035584 = 2               (wrong format specifier gives wrong result, no error)
    printf("%f / %f = %d\n", 9.5, 2.5, 9.5/2.5);// 9.500000 / 2.500000 = 1717986918 (wrong format specifier gives wrong result, no error)
    printf("%f / %f = %f\n", 9.5, 2.5, 9.5/2.5);// 9.500000 / 2.500000 = 3.800000

    return 0;
}

/*
    Division of two numbers gives Quotient
    Sign of the quotient depends on the sign of both numerator and denominator

    (+) / (+) = (+)
    (+) / (-) = (-)
    (-) / (+) = (-)
    (-) / (-) = (+)

    Note : If a wrong format specifier is used for a particular datatype it assumes garbage value
*/