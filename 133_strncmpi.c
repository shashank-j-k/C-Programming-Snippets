#include <stdio.h>
#include <string.h>

int main(void)
{
    int iNo;
    char szString1[20];
    char szString2[20];

    printf("\n\nEnter String 1 : ");
    gets(szString1);

    printf("Enter String 2 : ");
    gets(szString2);

    printf("Enter value of iNo : ");
    scanf("%d", &iNo);

    if(!strnicmp(szString1, szString2, iNo))
        printf("\nBoth strings are equal\n");
    else    
        printf("\nBoth strings are not equal\n");

    return 0;
}

/*
OUTPUT :

Enter String 1 : SHASHANK KALBHOR
Enter String 2 : shaSHAnK KALBHOR
Enter value of iNo : 6

Both strings are equal

*/