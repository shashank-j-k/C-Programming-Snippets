#include <stdio.h>

int main (void)
{
    printf("28 & 15 = %d\n", 28 & 15);    // 28 & 15 = 12
    printf("28 | 15 = %d\n", 28 | 15);    // 28 | 15 = 31
    printf("28 ^ 15 = %d\n", 28 ^ 15);    // 28 ^ 15 = 19
    printf("   ~ 28 = %d\n\n", ~28);      // ~28  = -29

    printf("4 << 1  = %d\n", 4 << 1);     // 4 << 1  = 8 
    printf("4 >> 1  = %d\n", 4 >> 1);     // 4 >> 1  = 2
    printf("20 << 2 = %d\n", 20 << 2);    // 20 << 2 = 80
    printf("20 >> 2 = %d\n", 20 >> 2);    // 20 >> 2 = 5

    return 0;
}

/*  
    Explanation : 

*   Bitwise operators work on individual bits of the binary of their operands depending on the truth tables

    TRUTH TABLE

    +--------------------------------------------------------------------------------------------------+
    | Operand 1 | Operand 2 |& (Bitwise AND)| |(Bitwise OR)| ^(Bitwise EX-OR)|~ (Bitwise NOT) Operand 1|
    |--------------------------------------------------------------------------------------------------|
    |     0     |     0     |       0       |      0       |        0        |            1            |
    |     0     |     1     |       0       |      1       |        1        |            1            |
    |     1     |     0     |       0       |      1       |        1        |            0            |
    |     1     |     1     |       1       |      1       |        0        |            0            |
    +--------------------------------------------------------------------------------------------------+


     Significance      128     64      32      16      8       4       2       1
                        _       _       _       _      _       _       _       _
     Binary of  28      0       0       0       1      1       1       0       0
     Binary of  15      0       0       0       0      1       1       1       1
---------------------------------------------------------------------------------------------------
    28 & 15 (AND)   :   0       0       0       0      1       1       0       0   =  12
    28 | 15 (OR)    :   0       0       0       1      1       1       1       1   =  31
    28 ^ 15 (EXOR)  :   0       0       0       1      0       0       1       1   =  19
    ~ 28 (NOT)      :   1       1       1       0      0       0       1       1   =  calculate 2s complement
                        --------------------------------------------------------------
    1s compliment   :   0       0       0       1       1      1       0       0
                                                                            +  1
                        --------------------------------------------------------------
                        0       0       0       1       1      1       0       1   =  -29

    
     Significance      128     64      32      16      8       4       2       1
                        _       _       _       _      _       _       _       _
     Binary of   4      0       0       0       0      0       1       0       0
---------------------------------------------------------------------------------------------------
         4 << 1     :   0       0       0       0      1       0       0       0   =  8
         4 >> 1     :   0       0       0       0      0       0       1       0   =  2


     Significance      128     64      32      16      8       4       2       1
                        _       _       _       _      _       _       _       _
     Binary of  20      0       0       0       1      0       1       0       0
---------------------------------------------------------------------------------------------------
        20 << 2     :   0       1       0       1      0       0       0       0   =  80
        20 >> 2     :   0       0       0       0      0       1       0       1   =  5


    * If ON bit overflows during left shift or right shift then it is called data overflow

    *   GENERAL FORMULA :

                +---------------------------+
                |  NO << n = NO * (2^n)     |
                +---------------------------+
    Example :   4 << 1 = 4 * 2^1 = 4 * 2 = 8
                20 << 2 = 20 * 2^2 = 20 * 4 = 80
                +---------------------------+
                |  NO >> n = NO / (2^n)     |
                +---------------------------+
    Example :   4 >> 1 = 4 / 2^1 = 4 / 2 = 2
                20 >> 2 = 20 / 2^2 = 20 / 4 = 5


*   APPLICATION OF LEFTSHIFT AND RIGHTSHIFT OPERATORS
*   Computer processor knows only addition. It performs multiplication, subtraction and division by using addition
*   Leftshift and Right shift operators can be used for replacing multiplication in assembly
    Example :
                2 << 1 = 4
                2 << 2 = 8
                2 << 1 + 2 = 6
                2 << 2 + 2 = 10
                2 << 2 + 2 << 1 = 12
                2 << 2 + 2 << 1 + 2 = 14
*   Bitwise operators are used in two domains
    - Security domains : Encryption and Decryption
    - Memory Optimisation : Storing multiple data in single memory
*/