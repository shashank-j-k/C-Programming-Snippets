#include <stdio.h>
#define EQUAL 1
#define NOT_EQUAL 0

struct demo
{
    char chChar;
    int iNo;
    double dNo;
};

int CompareObject(struct demo, struct demo);

int main(void)
{
    int iRet;
    struct demo oObj1, oObj2;
 
    // Taking input from user
    printf("Enter object 1 values   :-\n");  
    printf("Enter a Character\t:\t");                   // A
    scanf("%c", &oObj1.chChar);
    printf("Enter an Integer \t:\t");                   // 45
    scanf("%d", &oObj1.iNo);
    printf("Enter a Decimal Number  :\t");              // 9.018
    scanf("%lf", &oObj1.dNo);

    printf("\nEnter object 2 values   :-\n");   
    printf("Enter a Character\t:\t");                   // I
    scanf(" %c", &oObj2.chChar);
    printf("Enter an Integer \t:\t");                   // 63
    scanf("%d", &oObj2.iNo);
    printf("Enter a Decimal Number  :\t");              // 18.45
    scanf("%lf", &oObj2.dNo);

    // Displaying values to user
    printf("\nObject 1 values are  :-\n");
    printf("\tCharacter is : %c\n", oObj1.chChar);       // A
    printf("\tInteger is   : %d\n", oObj1.iNo);          // 45
    printf("\tDouble is    : %lf\n\n", oObj1.dNo);       // 9.018000

    printf("Object 2 values are  :-\n");
    printf("\tCharacter is : %c\n", oObj2.chChar);       // I
    printf("\tInteger is   : %d\n", oObj2.iNo);          // 63
    printf("\tDouble is    : %lf\n", oObj2.dNo);         // 18.450000

    if(CompareObject(oObj1, oObj2))
        printf("\nBoth objects are equal");
    else 
        printf("\nBoth objects are not equal");

    return 0;
}
/*
OUTPUT :

Enter object 1 values   :
Enter a Character       :       A
Enter an Integer        :       45
Enter a Decimal Number  :       9.018

Enter object 2 values   :
Enter a Character       :       I
Enter an Integer        :       63
Enter a Decimal Number  :       18.45

Object 1 values are  :
        Character is : A
        Integer is   : 45
        Double is    : 9.018000

Object 2 values are  :
        Character is : I
        Integer is   : 63
        Double is    : 18.450000
    
Both objects are not equal
*/
int CompareObject(struct demo obj1, struct demo obj2)
{
    if(obj1.chChar == obj2.chChar && obj1.iNo == obj2.iNo && obj1.dNo == obj2.dNo)
        return EQUAL;
    else 
        return NOT_EQUAL;
}