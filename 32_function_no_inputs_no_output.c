#include <stdio.h>

void Addition(void);

int main(void)
{
    Addition();

    return 0;
}

/* OUTPUT:
Enter two Numbers :  34 2
Addition is 36
*/

void Addition(void)
{
    int iNo1;
    int iNo2;
    int iAns;

    printf("Enter two Numbers :  ");
    scanf("%d %d", &iNo1, &iNo2);

    iAns = iNo1 + iNo2;

    printf("Addition is %d\n", iAns);
}

