#include <stdio.h>
#include <tchar.h>

int main(void)
{
    TCHAR chChar = 'A';
    TCHAR szString[] = _TEXT("Hello");
    TCHAR *pszString = _T("Hello");

    printf("sizeof(chChar)  \t:\t%d\n", sizeof(chChar));            // 1
    printf("sizeof(szString)\t:\t%d\n", sizeof(szString));          // 6
    printf("sizeof(pszString)\t:\t%d\n\n", sizeof(pszString));      // 8

    printf("strlen(szString)\t:\t%d\n", _tcslen(szString));         // 5
    printf("strlen(pszString)\t:\t%d\n", _tcslen(pszString));       // 5

    return 0;
}

/*
OUTPUT : when run in ASCII mode

sizeof(chChar)          :       1
sizeof(szString)        :       6
sizeof(pszString)       :       4

strlen(szString)        :       5
strlen(pszString)       :       5

OUTPUT : when run in UNICODE mode (command for vsCode : gcc -DUNICODE -D_UNICODE .\152_generic_programming.c -o 152_generic.exe)

sizeof(chChar)          :       2
sizeof(szString)        :       12
sizeof(pszString)       :       4

strlen(szString)        :       5
strlen(pszString)       :       5
*/

