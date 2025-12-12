#include <stdio.h>
#include <string.h>

int main(void)
{
    int iNo;
    char szSource[100];
    char szDestination[100];

    printf("\n\nEnter Source String : ");
    // scanf("%[^\n]", szSource);
    gets(szSource);

    printf("\nEnter value of iNo : ");
    scanf("%d", &iNo);

    printf("\nSource String is : ");
    // printf("%s\n", szSource);
    puts(szSource);

    strncpy(szDestination, szSource, iNo);

    printf("\nDestination String is : ");
    // printf("%s", szDestination);
    puts(szDestination);

    return 0;
}

/*
OUTPUT :

Enter Source String     :       UNIX is very simple but it takes a genius to understand its simplicity

Enter value of n        :       19

Source String is        :       UNIX is very simple but it takes a genius to understand its simplicity

Destination String is   :       UNIX is very simple
-----------------------------------------------------------------------------------------------------------------------
Enter Source String     :       UNIX is very simple but it takes a genius to understand its simplicity

Enter value of n        :       20

Source String is        :       UNIX is very simple but it takes a genius to understand its simplicity

Destination String is   :       UNIX is very simple `♀f
-----------------------------------------------------------------------------------------------------------------------
Enter Source String     :       UNIX is very simple but it takes a genius to understand its simplicity

Enter value of n        :       21

Source String is        :       UNIX is very simple but it takes a genius to understand its simplicity

Destination String is   :       UNIX is very simple b♀↕

*/