/* Integer is constant
   Pointer is Non constant 
   Pointer pointing to a constant integer
*/
#include <stdio.h>

int main(void)
{
    const int iNo = 10;
    const int *pPtr = &iNo;

    //printf("++ iNo   = \t%d\n", ++iNo);       // error: increment of read-only variable 'iNo' (not allowed as integer is a constant)
    //printf("++ *pPtr = \t%d\n", ++ *pPtr);    // error: increment of read-only location '*pPtr' (not allowed as pointing to a constant)
    printf("++ pPtr  = \t%d\n", ++ pPtr);       // 6422300 (allowed as pointer is non constant)

    return 0;
}