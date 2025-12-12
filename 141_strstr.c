#include <stdio.h>
#include <string.h>

int main(void)
{
    char *pPtr = NULL;
    char szMainString[55];
    char szSubString[20];

    printf("\n\nEnter the main String : ");
    gets(szMainString);    
    
    printf("Enter string to be found : ");
    gets(szSubString);

    pPtr = strstr(szMainString, szSubString);

    if(NULL == pPtr)
        printf("\n%s not found in the string", szSubString);
    else
        printf("\n%s found at position %d", szSubString, (pPtr - szMainString) + 1);

    return 0;
}

/*
OUTPUT :

Enter the main String : The Design of the Unix Operating System
Enter string to be found : Unix

Unix found at position 19
------------------------------------------------------------------

Enter the main String : The Design of the Unix Operating System
Enter string to be found : the

the found at position 15
------------------------------------------------------------------
Enter the main String : The Design of the Unix Operating System
Enter string to be found : gn of

gn of found at position 9
*/
