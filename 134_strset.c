#include <stdio.h>
#include <string.h>

int main(void)
{
    char szString[20];
    char chSetChar;

    printf("\n\nEnter a String : ");
    gets(szString);

    printf("Enter character to set : ");
    scanf("%c", &chSetChar);

    strset(szString, chSetChar);

    printf("\nNow the String is : ");
    puts(szString);

    return 0;
}

/*
OUTPUT :

Enter a String : Password
Enter character to set : *

Now the String is : ********
------------------------------
Enter a String : username password
Enter character to set : *

Now the String is : *****************   
*/