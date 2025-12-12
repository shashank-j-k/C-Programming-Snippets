#include <stdio.h>
#include <string.h>

int main(void)
{
    char szString[] = "Hello,Good,Afternoon;How;are,you?";
    char *pszStr = NULL;

    pszStr = strtok(szString, ",;");

    while(pszStr != NULL)
    {
        // printf("%s\n", pszStr);
        puts(pszStr);
        pszStr = strtok(NULL, ",;");
    }

    return 0;
}

/*
OUTPUT :

Hello
Good     
Afternoon
How      
are      
you?
*/