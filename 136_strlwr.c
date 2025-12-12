#include <stdio.h>
#include <string.h>

int main(void)
{
    char szString[60];

    printf("\n\nEnter a String : ");
    gets(szString);

    strlwr(szString);

    printf("\nString in Lower Case is : ");
    puts(szString);

    return 0;
}

/*
OUTPUT :

Enter a String : THIS PROGRAM WILL TURN THIS SENTENCE IN LOWER CASE

String in Lower Case is : this program will turn this sentence in lower case
------------------------------
Enter a String : SHASHANK KAlbhor

String in Lower Case is : shashank kalbhor 
*/