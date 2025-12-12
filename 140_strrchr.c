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

    pPtr = strrchr(szString, chChar);

    if(NULL == pPtr)
        printf("\n%c not found in the string", chChar);
    else
        printf("\n%c found at position %d", chChar, (pPtr - szString) + 1);

    return 0;
}

/*
OUTPUT :

Enter a String : mosquito
Enter a character : o

o found at position 8
------------------------------------------------

Enter a String : was it a car or a cat i saw
Enter a character : w

w found at position 27
*/
