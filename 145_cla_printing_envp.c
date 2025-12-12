#include <stdio.h>

int main(int argc, char* argv[], char* envp[])
{
    int iCounter;

    printf("Printing Environment Settings :\n\n");

    for(iCounter = 0; envp[iCounter] != NULL; iCounter ++)
    {
        printf("%s\n", envp[iCounter]);
    }

    return 0;
}
