#include <stdio.h>

int Addition(int, int);

int main(void)
{
    int iNo1;
    int iNo2;
    int iAns;

    printf("Enter two Numbers :  ");
    scanf("%d %d", &iNo1, &iNo2);

    iAns = Addition(iNo1, iNo2);

    printf("Addition is %d\n", iAns);
    
    return 0;
}

/* OUTPUT:
Enter two Numbers :  45 8
Addition is 53
*/

int Addition(int iNo1, int iNo2)
{
    int iAns;
    
    iAns = iNo1 + iNo2;

    return iAns;
}