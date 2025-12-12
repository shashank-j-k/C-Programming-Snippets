#include <stdio.h>

union demo
{
    char chChar;
    int iNo;
    double dNo;
};

int main(void)
{
    union demo oObj;
    printf("%c %d %4.2lf\n", oObj.chChar, oObj.iNo, oObj.dNo);     

    oObj.chChar = 'A';
    printf("%c %d %4.2lf\n", oObj.chChar, oObj.iNo, oObj.dNo);   

    oObj.iNo = 10;
    printf("%c %d %4.2lf\n", oObj.chChar, oObj.iNo, oObj.dNo);    

    oObj.dNo = 99.99;
    printf("%c %d %4.2lf", oObj.chChar, oObj.iNo, oObj.dNo);     

    return 0;
}

/*OUTPUT:
  2367488 0.00
A 2367553 0.00              (2367553 - 2367448 = 65)

 10 0.00
Å 687194767 99.99           
*/