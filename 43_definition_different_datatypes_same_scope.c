#include <stdio.h>

int main(void)
{
    int iNo = 10;               // note: previous definition of 'iNo' was here
    //float iNo = 10.08f;       // error: conflicting types for 'iNo'
    printf("%d ", iNo);         // 10    

    return 0;
}

