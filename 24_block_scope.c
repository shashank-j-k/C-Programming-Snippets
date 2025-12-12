/*
    This program is a demonstration of scope of a variable 
*/

#include <stdio.h>

int main(void)
{
    int iNo1 = 10;

    printf("%d\n", iNo1);     // 10
    //printf("%d", iNo2);     //error: 'iNo2' undeclared
    {
        int iNo2 = 20;
        printf("%d\n", iNo1); // 10     iNo1 accessible as defined outside the block before 
        printf("%d\n", iNo2); // 20     iNo2 accessible as defined inside the block
    }

    printf("%d\n", iNo1);     // 10
    //printf("%d", iNo2);     //error: 'iNo2' undeclared
}

/*
    Here, error at line 20 indicates the scope of the variable is limited to its block as it is declared inside that block
    And hence it is not accessible outside that block
*/