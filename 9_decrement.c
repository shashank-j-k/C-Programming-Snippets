#include <stdio.h>

int main(void)
{
    int iNo = 10;
    int iAns1;
    int iAns2;

    printf("iNo = %d\n", iNo);        //10

    iAns1 = iNo--;
    printf("iNo = %d\n", iNo);        //9
    printf("iAns1 = %d\n", iAns1);    //10

    iAns2 = --iNo;
    printf("iNo = %d\n", iNo);        //8
    printf("iAns2 = %d\n", iAns2);    //8

    printf("iNo = %d\n", - -iNo);     //8
    printf("iNo = %d\n", iNo);        //8

    --iNo;
    printf("iNo = %d\n", iNo);        //7

    iNo--;
    printf("iNo = %d\n", iNo);        //6

    printf("iNo = %d\n", iNo--);      //6
    printf("iNo = %d\n", iNo);        //5

    printf("iNo = %d\n", --iNo);      //4
    printf("iNo = %d\n", iNo);        //4

    //printf("%d", --10);             //error : lvalue required as increment operand
    //printf("%d", 10--);             //error : lvalue required as increment operand

    printf("iNo = %d\n", iNo - 1);    //3
    printf("iNo = %d\n", iNo);        //4

    return 0;
}


/*
    Pre decrement operator : --iNo  => iNo = iNo - 1
                           : decrement first then throw the value
                           : Throws decremented value
                            

    Post decrement operator : iNo-- => iNo = iNo - 1
                            : Throw the value first then decrement
                            : Throws old value
*/