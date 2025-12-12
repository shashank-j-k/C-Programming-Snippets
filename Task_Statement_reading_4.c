
/* 
        STATEMENT    :-   void * Fun1(char, int (*)());          
*/

#include <stdio.h>

int ReturnSquare(void);
void * Fun1(char, int (*)());

int main(void)
{
    char chChar;
    int (*fpPtr)() = NULL;
    void *(*pPtr1)(char, int (*)()) = NULL;

    printf("Enter a character :\t");
    scanf("%c", &chChar);

    pPtr1 = Fun1;
    fpPtr = ReturnSquare;

    pPtr1(chChar, fpPtr);

    return 0;
}

/*
OUTPUT :

Enter a character :     A
Enter a number :        5

A 25
*/

void * Fun1(char chChar, int (*pPtr)())
{
    int iReturnNo;
    iReturnNo = pPtr();

    printf("\n%c %d\n", chChar, iReturnNo);
}

int ReturnSquare(void)                          // This function will return the square of entered number
{
    int iNo;
    printf("Enter a number :\t");
    scanf("%d", &iNo);

    iNo = iNo * iNo;                

    return iNo;
}