/* Integer is constant
   Pointer is Non constant 
   Pointer pointing to a Non constant integer
*/
#include <stdio.h>

int main(void)
{
    const int iNo = 10;
    int *pPtr = &iNo;                         //  warning: initialization discards 'const' qualifier from pointer target typ

    //printf("++ iNo   = \t%d\n", ++iNo);     // error: increment of read-only variable 'iNo' (not allowed as integer is constant)
    printf("++ *pPtr = \t%d\n", ++ *pPtr);    // 11 (allowed as pointing to a non constant)
    printf("++ pPtr  = \t%d\n", ++ pPtr);     // 6422300 (allowed as pointer is a non constant)

    return 0;
}