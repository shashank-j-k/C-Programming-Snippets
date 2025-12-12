#include <stdio.h>

struct demo
{
    char chChar;
    int iNo;
    double dNo;
};

int main(void)
{
    struct demo oObj;
    printf("%c %d %0.2lf\n", oObj.chChar, oObj.iNo, oObj.dNo);     // α(Garbage) 0(Garbage) 0.00(Garbage) 

    oObj.chChar = 'A';
    printf("%c %d %0.2lf\n", oObj.chChar, oObj.iNo, oObj.dNo);     // A 0(Garbage) 0.00(Garbage)

    oObj.iNo = 10;
    printf("%c %d %0.2lf\n", oObj.chChar, oObj.iNo, oObj.dNo);     // A 10 0.00(Garbage)

    oObj.dNo = 99.99;
    printf("%c %d %0.2lf", oObj.chChar, oObj.iNo, oObj.dNo);       // A 10 99.99

    return 0;
}

