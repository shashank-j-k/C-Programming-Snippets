#include <stdio.h>

struct demo1
{
    char chChar1;
    double dNo;
}oObj1;

#pragma pack (4)

struct demo2
{
    char chChar;
    double dNo;
}oObj2;

#pragma pack (1)

struct demo3
{
    char chChar;
    double dNo;
}oObj3;

#pragma pack()                                            // Default value

struct demo
{
    char chChar;
    double dNo;
}oObj4;

int main(void)
{
    printf("Size of object 1 = %d\n", sizeof(oObj1));     // 16
    printf("Size of object 2 = %d\n", sizeof(oObj2));     // 12     
    printf("Size of object 3 = %d\n", sizeof(oObj3));     // 9
    printf("Size of object 4 = %d\n", sizeof(oObj4));     // 16

    return 0;
}