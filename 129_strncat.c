#include <stdio.h>
#include <string.h>

int main(void)
{
    int iNo;
    char szSource[50];
    char szDestination[100];

    printf("\n\nEnter Destination String : ");
    gets(szDestination);

    printf("\nEnter Source String : ");
    gets(szSource);

    printf("\nEnter Value of iNo : ");
    scanf("%d", &iNo);  

    strncat(szDestination, szSource, iNo);

    printf("\nConcatinated String is : ");
    puts(szDestination);

    return 0;
}

/*
OUTPUT :

Enter Destination String : Hello 

Enter Source String : Konnichiwa

Enter Value of iNo : 3

Concatinated String is : Hello Kon
*/