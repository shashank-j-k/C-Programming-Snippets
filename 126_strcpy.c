#include <stdio.h>
#include <string.h>

int main(void)
{
    char szSource[65];
    char szDestination[65];

    printf("\n\nEnter Source String :\t");
    gets(szSource);

    printf("\nSource String is :\t");
    puts(szSource);

    strcpy(szDestination, szSource);

    printf("\nDestination String is :\t");
    puts(szDestination);

    return 0;
}

/*
OUTPUT :

Enter Source String :   This function copies the source string in destination string

Source String is :      This function copies the source string in destination string

Destination String is : This function copies the source string in destination string

*/