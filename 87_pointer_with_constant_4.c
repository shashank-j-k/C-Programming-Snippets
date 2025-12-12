/* Integer is Non constant
   Pointer is constant 
   Pointer pointing to a constant integer
*/
#include <stdio.h>

int main(void)
{
    int iNo = 10;
    const int * const pPtr = &iNo;

    printf("++ iNo   = \t%d\n", ++iNo);         // 11 (allowed as integer is non constant)
    //printf("++ *pPtr = \t%d\n", ++ *pPtr);    // error: increment of read-only location '*pPtr' (not allowed as pointing to a constant)
    //printf("++ pPtr  = \t%d\n", ++ pPtr);     // error: increment of read-only variable 'pPtr' (not allowed as pointer is a constant)

    return 0;
}