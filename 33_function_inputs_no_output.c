#include <stdio.h>

void Addition(int, int);

int main(void)
{
    int iNo1;
    int iNo2;

    printf("Enter two Numbers :  ");
    scanf("%d %d", &iNo1, &iNo2);

    Addition(iNo1, iNo2);

    return 0;
}

/*OUTPUT:
Enter two Numbers :  34 4
Addition is 38
*/

void Addition(int iNo1, int iNo2)
{
    int iAns;
    
    iAns = iNo1 + iNo2;

    printf("Addition is %d\n", iAns);
}