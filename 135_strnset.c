#include <stdio.h>
#include <string.h>

int main(void)
{
    int iNo;
    char szString[25];
    char chSetChar;

    printf("\n\nEnter a String : ");
    gets(szString);

    printf("Enter character to set : ");
    scanf("%c", &chSetChar);

    printf("Enter value of iNo : ");
    scanf("%d", &iNo);

    strnset(szString, chSetChar, iNo);

    printf("\nNow the String is : ");
    puts(szString);

    return 0;
}

/*
OUTPUT :

Enter a String : hhhhhhhhh Fir Koi Hai!
Enter character to set : S
Enter value of iNo : 7

Now the String is : SSSSSSShh Fir Koi Hai! 
-------------------------------------------
Enter a String : isolate whey hello
Enter character to set :  
Enter value of iNo : 9

Now the String is :          hey hello 
*/