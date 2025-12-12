#include <stdio.h>

int main(void)
{
    int iNo = 10;
    int iAns1;
    int iAns2;

    printf("iNo = %d\n", iNo);        //10

    iAns1 = ++iNo;
    printf("iNo = %d\n", iNo);        //11
    printf("iAns1 = %d\n", iAns1);    //11

    iAns2 = iNo++;
    printf("iNo = %d\n", iNo);        //12
    printf("iAns2 = %d\n", iAns2);    //11

    iNo++;
    printf("iNo = %d\n", iNo);        //13

    ++iNo;
    printf("iNo = %d\n", iNo);        //14

    printf("iNo = %d\n", iNo++);      //14
    printf("iNo = %d\n", iNo);        //15

    printf("iNo = %d\n", ++iNo);      //16
    printf("iNo = %d\n", iNo);        //16

    printf("iNo = %d\n", + +iNo);     //16
    printf("iNo = %d\n", iNo);        //16

    //printf("%d", ++10);             //error : lvalue required as increment operand
    //printf("%d", 10++);             //error : lvalue required as increment operand

    printf("iNo = %d\n", iNo + 1);    //17
    printf("iNo = %d\n", iNo);        //16

    return 0;
}

/*
    Pre increment operator : ++iNo  => iNo = iNo + 1
                           : Increment first then throw the value
                           : Throws incremented value
                            

    Post increment operator : iNo++ => iNo = iNo + 1
                            : Throw the value first then increment
                            : Throws old value
*/