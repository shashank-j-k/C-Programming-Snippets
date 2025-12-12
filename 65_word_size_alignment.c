#include <stdio.h>

struct demo1
{
    char chChar;
    double dNo;
}oObj1;

struct demo2
{
    char chChar;
    int iNo;
}oObj2;

struct demo3
{
    int iNo;
    double dNo;
}oObj3;

struct demo4
{
    char chChar1;
    char chChar2;
}oObj4;

int main(void)
{
    printf("Size of object1\t\t  : %d\n", sizeof(oObj1));        // 16
    printf("\tSize of Character : %d\n", sizeof(oObj1.chChar));  // 1
    printf("\tSize of Double    : %d\n\n", sizeof(oObj1.dNo));   // 8

    printf("Size of object2\t\t  : %d\n", sizeof(oObj2));        // 8
    printf("\tSize of Character : %d\n", sizeof(oObj2.chChar));  // 4
    printf("\tSize of Integer   : %d\n\n", sizeof(oObj2.iNo));   // 4

    printf("Size of object3\t\t  : %d\n", sizeof(oObj3));        // 16
    printf("\tSize of Integer   : %d\n", sizeof(oObj3.iNo));     // 4
    printf("\tSize of Double    : %d\n\n", sizeof(oObj3.dNo));   // 8

    printf("Size of object4\t\t  : %d\n", sizeof(oObj4));        // 2
    printf("\tSize of Character : %d\n", sizeof(oObj4.chChar1)); // 1
    printf("\tSize of Character : %d\n", sizeof(oObj4.chChar2)); // 1


    return 0;
}