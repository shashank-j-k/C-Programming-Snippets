#include <stdio.h>
#include <string.h>

int main(void)
{
    char szSource[50];
    char szDestination[100];

    printf("\n\nEnter Destination String : ");
    gets(szDestination);

    printf("\nEnter Source String : ");
    gets(szSource);

    strcat(szDestination, szSource);

    printf("\nConcatinated String is : ");
    puts(szDestination);

    return 0;
}

/*
OUTPUT:

Enter Destination String : Unix is Simple but

Enter Source String :  it takes a genius to understand its simplicity

Concatinated String is : Unix is Simple but it takes a genius to understand its simplicity
*/