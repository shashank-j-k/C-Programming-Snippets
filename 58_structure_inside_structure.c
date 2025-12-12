#include <stdio.h>

struct outer1
{
    int iNo1;
    float fNo;
    struct inner1
    {
        int iNo2;
        float fNo2;
    };
}oObj1;
 

struct outer2
{
    int iNo1;
    float fNo;
    struct inner2
    {
        int iNo2;
        float fNo2;
    }iObj;
}oObj2;


struct outer3
{
    char chChar;
    int iNo;
    struct inner3
    {
        int iNo;
        float fNo;
    }iObj1, iOb2;
}oObj3;


struct outer4
{
    int iNo;
    double dNo;
    struct inner4
    {
        int iNo;
        float fNo;
    }iObj[3];
}oObj4;


int main (void)
{
    printf("struct outer1 oObj1 : %d \n", sizeof(oObj1));   // 16 (8 in some other compilers as no object for inner struct)
    printf("struct outer2 oObj2 : %d \n", sizeof(oObj2));   // 16
    printf("struct outer3 oObj3 : %d \n", sizeof(oObj3));   // 24
    printf("struct outer4 oObj4 : %d \n", sizeof(oObj4));   // 40

    return 0;
}