#include <stdio.h>

struct inner
{
    int iNo;
    float fNo;
};

struct outer
{
    int iNo;
    float fNo;
    struct inner iObj;
} oObj;

int main (void)
{
    printf("struct outer oObj :\t%d", sizeof(oObj));     // 16
} 
