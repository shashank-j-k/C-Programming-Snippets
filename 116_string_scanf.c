#include <stdio.h>

int main(void)
{
    char szName[10];

    printf("Enter your name :-\t");         
    scanf("%s", szName);                    // note no '&' required as szName itself is its address
                                            // scanf reads characters from console until whitespace characted is encountered (excludes whitespace)
    printf("You Entered\t:\t%s", szName);                    

    return 0;
}

/*OUTPUT :  note that string size exceeds array size and still it gets printed (may crash). Hence scanf is not a secured function

Enter your name :-      shashank kalbhor
You Entered     :       shashank                                                                                
*/