#include <stdio.h>

union outer1
{
    int iNo;
    double dNo;
    struct inner1
    {
        char chChar;
        float fNo;
    }iObj1, iObj2;
} oObj1;

union outer2
{
    char chChar;
    int iNo;
    struct inner2
    {
        char chChar1;
        char chChar2;
    } iObj[3];
} oObj2;

int main (void)
{
    printf("union outer1 oObj1\t\t: %d \n", sizeof(oObj1));                   // 8
    printf("union outer2 oObj2\t\t: %d \n", sizeof(oObj2));                   // 8 (expected 6)
    printf("union outer2 struct inner1 iObj\t: %d \n", sizeof(oObj1.iObj1));  // 8 (expected 5)
    printf("union outer2 struct inner2 iObj\t: %d \n", sizeof(oObj2.iObj));   // 6

    return 0;
}