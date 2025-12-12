#include <stdio.h>
#include <string.h>

int main(void)
{
    char chChar;
    char szString[100];
    int iNoOfTabs = 0;
    int iNoOfSpaces= 0;
    int iNoOfLines;
    int iNoOfCharacter = 0;

    FILE *fpPtr = NULL;
    fpPtr = fopen("tabs_spaces_newline_chaarcters_count.txt", "a");
    if(NULL == fpPtr)
    {
        printf("Failed to open file\n");
        return -1;
    }

    // printf("How many lines of data you want to enter?\n");
    // scanf("%d", &iNoOfLines);
    printf("Enter data to file : \n");
    gets(szString);
    

    fputs(szString, fpPtr);

    

    if(fpPtr != NULL)
    {
        fclose(fpPtr);
        fpPtr = NULL;
    }

    return 0;
}