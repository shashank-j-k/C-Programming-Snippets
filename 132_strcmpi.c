#include <stdio.h>
#include <string.h>

int main(void)
{
    char szString1[60];
    char szString2[60];

    printf("\n\nEnter String 1 : ");
    gets(szString1);

    printf("Enter String 2 : ");
    gets(szString2);

    if(!strcmpi(szString1, szString2))
        printf("\nBoth strings are equal\n");
    else    
        printf("\nBoth strings are not equal\n");

    return 0;
}

/*
OUTPUT :

Enter String 1 : SHASHANK KALBHOR
Enter String 2 : shashank KalBhOr

Both strings are equal
------------------------------------
Enter String 1 : This function compares string without considering case
Enter String 2 : THIS FUNCTION COMPARES STRING WITHOUT CONSIDERING CASE

Both strings are equal

*/