#include <stdio.h>

int main(void)
{
    char chChar1 = 65;                                                    
    char chChar2 = 97;
    int iNo1 = 0102;
    int iNo2 = 'b';
    char chChar3 = '!';                                           //33
    char chChar4 = '$';                                           //36
    char chAns;

    if(chChar1 == 65)
        printf("chChar1 in character format = \t%c\n", chChar1);       //A
    if(chChar1 != 65)  
        printf("chChar1 in integer format   = \t%d\n", chChar1);       //65

    printf("chChar2 in character format = \t%c\n", chChar2);       //a
    printf("chChar2 in integer format   = \t%d\n", chChar2);       //97

    printf("iNo1 in character format    = \t%c\n", iNo1);          //B
    printf("iNo1 in integer format      = \t%d\n", iNo1);          //66

    printf("iNo2 in character format    = \t%c\n", iNo2);          //b
    printf("iNo2 in integer format      = \t%d\n", iNo2);          //98

    printf("chChar3 in character format = \t%c\n", chChar3);       //!
    printf("chChar3 in integer format   = \t%d\n", chChar3);       //33

    printf("chChar4 in character format = \t%c\n", chChar4);       //$
    printf("chChar4 in integer format   = \t%d\n", chChar4);       //36

    chAns = chChar3 + chChar4;
    printf("chAns in character format   = \t%c\n", chAns);         //E
    printf("chAns in integer format     = \t%d\n", chAns);         //69

    chAns = chChar3 - chChar4;
    printf("chAns in character format   = \t%c\n", chAns);         // ²
    printf("chAns in integer format     = \t%d\n", chAns);         // -3  

    chAns = chChar3 * chChar4;
    printf("chAns in character format   = \t%c\n", chAns);         // ñ
    printf("chAns in integer format     = \t%d\n", chAns);         // -92 

    chAns = chChar3 / chChar4;
    printf("chAns in character format   = \t%c\n", chAns);         //
    printf("chAns in integer format     = \t%d\n", chAns);         // 0

    chAns = chChar3 % chChar4;
    printf("chAns in character format   = \t%c\n", chAns);         // !
    printf("chAns in integer format     = \t%d\n", chAns);         //33
    return 0;
}


/*
* you can store integers in characters and characters in integers

* If you store integer more than 127 in a char then it starts again from -128   : no warning below 255
        chChar = 127;            =>      printf("%d", chChar);      // 127
        chChar = 128;            =>      printf("%d", chChar);      // -128
        chChar = 129;            =>      printf("%d", chChar);      // -127
        chChar = 255;            =>      printf("%d", chChar);      // -1
        chChar = 256;            =>      printf("%d", chChar);      // 0
        chChar = 257;            =>      printf("%d", chChar);      // 1

    Above 255 char variable overflows and gives warning

* If you store negative values in a character then                              : waring below -128
        chChar = -127;            =>     printf("%d", chChar);      // -127
        chChar = -128;            =>     printf("%d", chChar);      // -128
        chChar = -129;            =>     printf("%d", chChar);      // 127
        chChar = -130;            =>     printf("%d", chChar);      // 126
        chChar = -255;            =>     printf("%d", chChar);      // 1
        chChar = -256;            =>     printf("%d", chChar);      // 0
        chChar = -257;            =>     printf("%d", chChar);      // -1

* statement if(chChar == 65)   => works 
    i.e we can use integers for comparison with a char variable

*If you enter a 0 before any integer it gets converted to octal
 In octal numbers above 7 i.e 8 and 9 will give error

* All arithmetic operations possible on char

*/