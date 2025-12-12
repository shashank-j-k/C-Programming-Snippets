#include <stdio.h>
#include <string.h>

int main(void)
{
    char *pPtr = "Hello";
    char szString[] = "Good";
    char szLine[] = "Hello Good_Morning!!";

    printf("\nThe Length of \"Hello\" is %d\n", strlen(pPtr));          // 5    (Does not include '\0')
    printf("The Length of \"Good\" is %d\n", strlen(szString));         // 4
    printf("The Length of \"Morning\" is %d\n", strlen("Morning"));     // 7
    printf("The Length of Line is %d\n", strlen(szLine));               // 20   (Includes the white spaces & special charcters)

    return 0;
}