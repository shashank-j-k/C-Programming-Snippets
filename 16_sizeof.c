#include <stdio.h>

int main(void)
{
    char chChar = 'A';
    int iNo = 10;
    float fNo = 57.33f;
    double dNo = 69.33;

    printf("sizeof(char) = %d\n", sizeof(char));        // 1
    printf("sizeof(int) = %d\n", sizeof(int));          // 4
    printf("sizeof(float) = %d\n", sizeof(float));      // 4
    printf("sizeof(double) = %d\n\n", sizeof(double));  // 8

    printf("sizeof(chChar) = %d\n", sizeof(chChar));    // 1
    printf("sizeof(iNo) = %d\n", sizeof(iNo));          // 4
    printf("sizeof(fNo) = %d\n", sizeof(fNo));          // 4
    printf("sizeof(dNo) = %d\n\n", sizeof(dNo));        // 8

    printf("sizeof('B') = %d\n", sizeof('B'));         // 4     the ascii value of 'B' is considered as an integer
    printf("sizeof(\"size\") = %d\n", sizeof("size")); // 5     includes the '\0'
    printf("sizeof(20) = %d\n", sizeof(20));           // 4
    printf("sizeof(99.99) = %d\n", sizeof(99.99));     // 8     floating point literal constant gets considered as double ny default
    printf("sizeof(99.99f) = %d\n\n", sizeof(99.99f)); // 4     if we want 4 as sizeof a floating point literal constant then add a suffix 'f' or 'F' with the operand

    printf("sizeof 10 = %d\n", sizeof 10);             // 4
    printf(" sizeof iNo = %d\n\n", sizeof iNo);        // 4
    //printf("sizeof int = %d\n", sizeof int);         // error: expected expression before 'int' 

    printf("iNo = %d\n", iNo);                         // 10
    printf("sizeof(++iNo) = %d\n", sizeof(++iNo));     // 4     ++iNo is not executed
    printf("iNo = %d\n\n", iNo);                       // 10

    printf("sizeof(void) = %d\n", sizeof(void));       // 1 on VS Code 0 on VS command prompt

    return 0;
}


/*

    For datatypes i.e int, char, etc. sizeof operator requires (). If not then it gives an error
    However, variables, literal constants do not need () for sizeof operators

    sizeof operator does not physically perform operations. it only solves logically.
    i.e. int + int is an int
    Hence it gives output of integer and does not increment iNo
    Because sizeof is an keyword known to compiler
    Once the assembly is formed by the compiler then the sizeof operator cannot be operated

    It comes in action during compiling i.e. building in assembly

*/