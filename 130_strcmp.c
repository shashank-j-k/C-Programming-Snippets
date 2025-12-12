#include <stdio.h>
#include <string.h>

int main(void)
{
    char szString1[50];
    char szString2[50];

    printf("\n\nEnter String 1 : ");
    gets(szString1);

    printf("Enter String 2 : ");
    gets(szString2);

    if(strcmp(szString1, szString2) == 0)
        printf("\nBoth strings are equal\n");
    else    
        printf("\nBoth strings are not equal\n");

    return 0;
}

/*
OUTPUT :

Enter String 1 : This program shows string comparison function
Enter String 2 : This program shows string comparison function

Both strings are equal
------------------------------------
Enter String 1 : username
Enter String 2 : password

Both strings are not equal
*/