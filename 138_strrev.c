#include <stdio.h>
#include <string.h>

int main(void)
{
    char szString[55];

    printf("\n\nEnter a String : ");
    gets(szString);

    strrev(szString);

    printf("\nReverse String is : ");
    puts(szString);

    return 0;
}

/*
OUTPUT :

Enter a String : Just like a mirroR

Reverse String is : Rorrim a ekil tsuJ
---------------------------------------

Enter a String : was i tac a ro rac a ti saw

Reverse String is : was it a car or a cat i saw
*/
