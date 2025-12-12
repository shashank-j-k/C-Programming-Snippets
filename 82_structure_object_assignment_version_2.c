/*Structure object assignment using pointer pointing to structs and passing object address only to functions in which changes is desired*/
#include <stdio.h>

struct outer
{
    char chChar;
    int iNo;
    double dNo;
};

void AssignObject(struct outer, struct outer *, struct outer*);

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

    AssignObject(oObj1, &oObj2, &oObj3);

    printf("\nObject 1 values are  :-\n");
    printf("\tCharacter is :\t%c\n", oObj1.chChar);     // s
    printf("\tInteger is   :\t%d\n", oObj1.iNo);        // 81
    printf("\tDouble is    :\t%lf\n\n", oObj1.dNo);     // 90.270000

    printf("Object 2 values are  :-\n");
    printf("\tCharacter is :\t%c\n", oObj2.chChar);     // s
    printf("\tInteger is   :\t%d\n", oObj2.iNo);        // 81
    printf("\tDouble is    :\t%lf\n\n", oObj2.dNo);     // 90.270000

    printf("Object 3 values are  :-\n");
    printf("\tCharacter is :\t%c\n", oObj3.chChar);     // s
    printf("\tInteger is   :\t%d\n", oObj3.iNo);        // 81
    printf("\tDouble is    :\t%lf\n\n", oObj3.dNo);     // 90.270000

    return 0;
}

void AssignObject(struct outer oObj1, struct outer *poObj2, struct outer *poObj3)
{
    *poObj2 = oObj1;

    poObj3->chChar = oObj1.chChar;
    poObj3->iNo = oObj1.iNo;
    poObj3->dNo = oObj1.dNo;
}