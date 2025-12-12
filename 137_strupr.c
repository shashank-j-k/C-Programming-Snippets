#include <stdio.h>
#include <string.h>

int main(void)
{
    char szString[60];

    printf("\n\nEnter a String : ");
    gets(szString);

    strupr(szString);

    printf("\nString in Upper Case is : ");
    puts(szString);

    return 0;
}

/*
OUTPUT :

Enter a String : shashank kalbhor

String in Upper Case is : SHASHANK KALBHOR  
------------------------------
Enter a String : This program turns given sentence in Upper case

String in Upper Case is : THIS PROGRAM TURNS GIVEN SENTENCE IN UPPER CASE
*/