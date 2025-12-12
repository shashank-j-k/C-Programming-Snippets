#include <stdio.h>

struct outer
{
    char chChar;
    int iNo;
    double dNo;
};

int main(void)
{
    struct outer oObj1, oObj2, oObj3;

    printf("Enter object 1 values :-\n\n");
    printf("Enter a Character      :\t");
    scanf("%c", &oObj1.chChar);

    printf("Enter an Integer       :\t");
    scanf("%d", &oObj1.iNo);

    printf("Enter a Decimal number :\t");
    scanf("%lf", &oObj1.dNo);  

    oObj2 = oObj1;                      // direct assignment
    
    oObj3.chChar = oObj1.chChar;        // member by member assignment     
    oObj3.iNo = oObj1.iNo;
    oObj3.dNo = oObj1.dNo;

    printf("\nObject 1 values are  :-\n");
    printf("\tCharacter is :\t%c\n", oObj1.chChar);     // A
    printf("\tInteger is   :\t%d\n", oObj1.iNo);        // 9
    printf("\tDouble is    :\t%lf\n\n", oObj1.dNo);     // 1.800000

    printf("Object 2 values are  :-\n");
    printf("\tCharacter is :\t%c\n", oObj2.chChar);     // A
    printf("\tInteger is   :\t%d\n", oObj2.iNo);        // 9
    printf("\tDouble is    :\t%lf\n\n", oObj2.dNo);     // 1.800000

    printf("Object 3 values are  :-\n");
    printf("\tCharacter is :\t%c\n", oObj3.chChar);     // A
    printf("\tInteger is   :\t%d\n", oObj3.iNo);        // 9
    printf("\tDouble is    :\t%lf\n\n", oObj3.dNo);     // 1.800000

    return 0;
}