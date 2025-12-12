#include <stdio.h>
// #include <string.h>
#include <wchar.h>

int main(void)
{
    wchar_t wchChar = 'A';
    wchar_t wszString[] = L"Hello";
    wchar_t *pwszString = L"Hello";

    printf("sizeof(chChar)  \t:\t%d\n", sizeof(wchChar));            // 2
    printf("sizeof(szString)\t:\t%d\n", sizeof(wszString));          // 12
    printf("sizeof(pszString)\t:\t%d\n\n", sizeof(pwszString));      // 8

    // printf("strlen(szString)\t:\t%d\n", strlen(wszString));       // 1 (expected 5) warning: passing argument 1 of 'strlen' from incompatible pointer type 
    printf("strlen(szString)\t:\t%d\n", wcslen(wszString));          // 5
    printf("strlen(pszString)\t:\t%d\n", wcslen(pwszString));        // 5

    return 0;
}