/*
    This program gets a character input from user and tells if it is an vowel or not along with if it is in Upper or lower case
*/

#include <stdio.h>

int main (void)
{
    char chChar;
    printf("Enter a character\n");
    scanf("%c", &chChar);

    switch (chChar)
    {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': 
            printf("%c is a Vowel in Upper Case\n", chChar);
        break;

        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': 
            printf("%c is a Vowel in Small Case\n", chChar);
        break;
        
        default:
            printf("%c is not a Vowel\n", chChar);

        return 0;
    }
}

/*
OUTPUT:
Enter a character
o
o is a Vowel in Lower Case
*/