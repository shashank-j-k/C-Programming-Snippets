#include <stdio.h>

union outer1
{
    int iNo;
    float fNo;
    union inner1
    {
        int iNo;
        float fNo;
    } iObj1, iObj2;
} oObj1;

union outer2
{
    char chChar;
    double No;
    union inner2
    {
        int iNo;
        float fNo;
    } iObj[3];
} oObj2;

int main (void)
{
    printf("union outer1 oObj1\t\t : %d \n", sizeof(oObj1));                    // 4
    printf("union outer2 oObj2\t\t : %d \n", sizeof(oObj2));                    // 16 (expected 12)
    printf("union outer1 union inner 1 iObj1 : %d \n", sizeof(oObj1.iObj1));    // 4
    printf("union outer2 union inner 2 iObj\t : %d \n", sizeof(oObj2.iObj));    // 12

    return 0;
}