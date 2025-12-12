#include <stdio.h>

union demo
{
    char chChar;
    int iNo;
    double dNo;
}obj;

int main(void)
{

    printf("%c %d %4.2lf\n", obj.chChar, obj.iNo, obj.dNo);     // Garbage Garbage Garbage(0.00)

    obj.chChar = 'A';
    printf("%c %d %4.2lf\n", obj.chChar, obj.iNo, obj.dNo);     // A Garbage Garbage(0.00)

    obj.iNo = 30;
    printf("%c %d %4.2lf\n", obj.chChar, obj.iNo, obj.dNo);     // 10 Garbage(0.00)

    obj.dNo = 99.99;
    printf("%c %d %4.2lf", obj.chChar, obj.iNo, obj.dNo);       // A 10 99.99

    return 0;
}

