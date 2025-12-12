#include <stdio.h>

int main (void)
{
    char chChar1;
    char chChar2;
    
    printf("Enter character 1 :\t");
    scanf("%c", &chChar1);

    printf("Enter character 2 :\t");
    scanf("%c", &chChar2);

    printf("\n");
    
    printf("Character 1 is\t:\t%c\n", chChar1);
    printf("Character 2 is\t:\t%c\n", chChar2);

    return 0;
}

/*
OUTPUT :    Because of the \n present in the Input buffer the second scanf accepts it as input and skips the actual user provided input
Enter character 1 :     A
Enter character 2 :
Character 1 is  :       A
Character 2 is  :

*/