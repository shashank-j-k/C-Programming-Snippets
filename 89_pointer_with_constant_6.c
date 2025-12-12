/* Integer is constant
   Pointer is constant 
   Pointer pointing to a constant integer
*/
#include <stdio.h>

int main(void)
{
    const int iNo = 10;
    int const * const pPtr = &iNo;                       

    // printf("++ iNo   = \t%d\n", ++iNo);       // error: increment of read-only variable 'iNo' (not allowed as integer is constant)
    // printf("++ *pPtr = \t%d\n", ++ *pPtr);    // error: increment of read-only location '*pPtr' (not allowed as pointing to a constant)
    // printf("++ pPtr  = \t%d\n", ++ pPtr);     // error: increment of read-only variable 'pPtr' (not allowed as pointer is constant)

    return 0;
}