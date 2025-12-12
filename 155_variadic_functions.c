#include <stdio.h>
#include <stdarg.h>

int myprintf(const char *, ...);
int Addition(int, ...);

int main(void)
{
    int iRet;

    iRet = myprintf("Hello\n");
    myprintf("myprintf returns %d\n\n", iRet);

    myprintf("%d\n", 10);
    myprintf("%c\t%d\n", 'A', 10);
    myprintf("%d\t%c\n", 10, 'A');
    myprintf("%c\t%d\t%f\t%lf\n\n", 'A', 10, 57.33f, 69.33);

    iRet = Addition(2, 10, 20);
    myprintf("Answer is %d\n", iRet);

    iRet = Addition(3, 10, 20, 30);
    myprintf("Answer is %d\n", iRet);

    iRet = Addition(4, 10, 20, 30, 40);
    myprintf("Answer is %d\n", iRet);

    return 0;
}

int myprintf(const char *pszFormat, ...)
{
    int iRet;
    va_list pArg = NULL; // typedef internally => char *

    va_start(pArg, pszFormat);  // macro -> stores address of parameter present after pszFormat (i.e parameter before ellipsis) in pArg

    iRet = vprintf(pszFormat, pArg);

    va_end(pArg);

    return iRet;
}

int Addition(int iNoOfParam, ...)
{
    int iAns = 0;
    int iCounter;

    va_list pArg = NULL;

    va_start(pArg, iNoOfParam);

    for(iCounter = 0; iCounter < iNoOfParam; iCounter ++)
        iAns = iAns + va_arg(pArg, int);    // derefers pArg wrt 'int' and returns value. Then increments address by sizeof(int)

    va_end(pArg);

    return iAns;

    
/*
OUTPUT :
    
Hello
myprintf returns 6

10
A       10
10      A
A       10      57.330002       69.330000

Answer is 30
Answer is 60
Answer is 100
*/