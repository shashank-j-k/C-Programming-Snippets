#include <stdio.h>
#include <string.h>

int main(void)
{
    int iNo;
    char szString1[50];
    char szString2[50];

    printf("\n\nEnter String 1 : ");
    gets(szString1);

    printf("Enter String 2 : ");
    gets(szString2);

    printf("Enter value of iNo : ");
    scanf("%d", &iNo);

    if(!strncmp(szString1, szString2, iNo))
        printf("\nBoth strings are equal\n");
    else    
        printf("\nBoth strings are not equal\n");

    return 0;
}

/*
OUTPUT :

Enter String 1 : Tomodachi to hanashimasho 
Enter String 2 : Tomodachi to aimasu
Enter value of iNo : 12

Both strings are equal
-------------------------------------------
Enter String 1 : Tomodachi to hanashimasho
Enter String 2 : Tomodachi to aimasu
Enter value of iNo : 25

Both strings are not equal
-------------------------------------------
Enter String 1 : STRING with uppercase
Enter String 2 : string with lowercase
Enter value of iNo : 4

Both strings are not equal
*/