/* Integer is Non constant
   Pointer is Non constant 
   Pointer pointing to a Non constant integer
*/
#include <stdio.h>

int main(void)
{
    int iNo = 10;
    int *pPtr = &iNo;

    printf("++ iNo   = \t%d\n", ++iNo);         // 11 (allowed as integer is non constant)
    printf("++ *pPtr = \t%d\n", ++ *pPtr);      // 12 (allowed as pointing to a non constant)
    printf("++ pPtr  = \t%d\n", ++ pPtr);       // 6422300 (allowed as pointer is non constant)

    return 0;
}