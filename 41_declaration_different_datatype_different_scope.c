#include <stdio.h>

extern int g_iNo;                 // Note: previous declaration of 'g_iNo' was here

int main(void)
{
    //extern float g_iNo;         // error: conflicting types for 'g_iNo'

    printf("%d ", g_iNo);         // 10    

    return 0;
}

int g_iNo = 10;
