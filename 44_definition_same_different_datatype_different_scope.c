#include <stdio.h>

void Fun(void);

int iNo = 10;

int main(void)
{
    int iNo = 20;     

    printf("In main :-\tiNo =\t%d\n", iNo);          // 20    
    {
        char iNo = 'A';
        printf("Inside block :- iNo =\t%d\n", iNo);      // 65
    }

    printf("In main :-\tiNo =\t%d\n", iNo);          // 20

    Fun();

    return 0;
}

void Fun(void)
{
    printf("In Fun :- \tiNo =\t%d\n", iNo);          // 10
}
