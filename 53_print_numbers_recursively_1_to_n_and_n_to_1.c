#include <stdio.h>

void PrintNumbersFromNto1(int);
void PrintNumbersFrom1toN(int);
 
int main(void)
{
    int iNo;

    printf("Enter a number : \t");
    scanf("%d", &iNo);

    PrintNumbersFromNto1(iNo);
    printf("______________________\n");
    PrintNumbersFrom1toN(iNo);
}

/* OUTPUT
Enter a number :        5
5
4
3
2
1
______________________
1
2
3
4
5
*/

void PrintNumbersFromNto1(int iNo)
{
    if(iNo <= 0)
        return;
    printf("%d\n", iNo);
    PrintNumbersFromNto1(iNo - 1);
}


void PrintNumbersFrom1toN(int iNo)
{   
    if(iNo <= 0)
        return;
    PrintNumbersFrom1toN(iNo - 1);
    printf("%d\n", iNo);
}