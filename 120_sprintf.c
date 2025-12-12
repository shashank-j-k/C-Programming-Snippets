/* sprintf stores all the parameters except 1st in the 1st parameter*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    int iNo = 10;
    char szStr[50] = "Hello";
    char *pszStr = "Good";
    char szTemp[50];

    sprintf(szTemp, "%s%s%s\n%s", szStr, pszStr, "Afternoon", szTemp);

    printf(szTemp);                                         // HelloGoodAfternoon    

    return 0;
}

/*
OUTPUT :

HelloGoodAfternoon
HelloGoodAfternoon
*/