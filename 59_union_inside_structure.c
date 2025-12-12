#include <stdio.h>

struct outer1
{
    int iNo;
    float fNo;
    union inner1
    {
        int iNo;
        float fNo;
    } iObj1, iObj2, iObj3;
} oObj1;

struct outer2
{
    int iNo;
    float fNo;
    union inner2
    {
        int iNo;
        float fNo;
    } iObj[3];
    double dNo;
} oObj2;


int main (void)
{
    printf("struct outer1 oObj1 : %d \n", sizeof(oObj1));   // 20
    printf("struct outer2 oObj2 : %d \n", sizeof(oObj2));   // 32 (expected 28)

    return 0;
}