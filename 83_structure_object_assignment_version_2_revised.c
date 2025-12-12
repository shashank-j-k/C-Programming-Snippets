/*Structure object assignment using pointer pointing to structs and passing all arguments as addresses*/
#include <stdio.h>

struct outer
{
    char chChar;
    int iNo;
    double dNo;
};

void AssignObject(const struct outer *, struct outer *, struct outer*);

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

    AssignObject(&oObj1, &oObj2, &oObj3);

    printf("\nObject 1 values are  :-\n");
    printf("\tCharacter is :\t%c\n", oObj1.chChar);     // A
    printf("\tInteger is   :\t%d\n", oObj1.iNo);        // 54
    printf("\tDouble is    :\t%lf\n\n", oObj1.dNo);     // 81.184500

    printf("Object 2 values are  :-\n");
    printf("\tCharacter is :\t%c\n", oObj2.chChar);     // A
    printf("\tInteger is   :\t%d\n", oObj2.iNo);        // 54
    printf("\tDouble is    :\t%lf\n\n", oObj2.dNo);     // 81.184500

    printf("Object 3 values are  :-\n");
    printf("\tCharacter is :\t%c\n", oObj3.chChar);     // A
    printf("\tInteger is   :\t%d\n", oObj3.iNo);        // 54
    printf("\tDouble is    :\t%lf\n\n", oObj3.dNo);     // 81.184500

    return 0;
}

void AssignObject(const struct outer *oObj1, struct outer *poObj2, struct outer *poObj3)
{
    *poObj2 = *oObj1;

    poObj3->chChar = oObj1->chChar;
    poObj3->iNo = oObj1->iNo;
    poObj3->dNo = oObj1->dNo;
}