#include <stdio.h>
#include <string.h>

int main(void)
{
    char chChar;
    char *pPtr = NULL;
    char szString[55];

    printf("\n\nEnter a String : ");
    gets(szString);    
    
    printf("Enter a character : ");
    scanf("%c", &chChar);

    pPtr = strchr(szString, chChar);

    if(NULL == pPtr)
        printf("\n%c not found in the string", chChar);
    else
        printf("\n%c found at position %d", chChar, (pPtr - szString) + 1);

    return 0;
}

/*
OUTPUT :

Enter a String : konnichiwa douzoyouroshiko
Enter a character : y

y found at position 17
------------------------------------------------

Enter a String : mizu kudasai
Enter a character : t

t not found in the string
------------------------------------------------
Enter a String : lets check the first space
Enter a character :  

  found at position 5
*/
