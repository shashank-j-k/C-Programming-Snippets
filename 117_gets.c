#include <stdio.h>

int main(void)
{
    char szName[10];

    printf("Enter your name :-\t");         
    gets(szName);                           // gets reads from console upto but not including newline character

    printf("You Entered\t:\t%s", szName);    

    return 0;
}

/*OUTPUT :  note that string size exceeds array size and still it gets printed (may crash). Hence gets is not a secured function

Enter your name :-      shashank kalbhor
You Entered     :       shashank kalbhor
*/