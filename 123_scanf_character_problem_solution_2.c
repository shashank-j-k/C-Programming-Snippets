#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    char chChar1;
    char chChar2;
    
    printf("Enter character 1 :\t");
    scanf("%c", &chChar1);

    fflush(stdin);
    // flushall();                         // error in Visual Studio Code

    printf("Enter character 2 :\t");
    scanf("%c", &chChar2);

    printf("\n");
    
    printf("Character 1 is\t:\t%c\n", chChar1);
    printf("Character 2 is\t:\t%c\n", chChar2);

    return 0;
}

/*
OUTPUT : 
Enter character 1 :     S
Enter character 2 :     K

Character 1 is  :       S
Character 2 is  :       K
*/