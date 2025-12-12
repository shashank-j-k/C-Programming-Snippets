#include <stdio.h>

int main(int argc, char* argv[])
{
    int iCounter;

    printf("Printing all arguemnts :\n");

    for(iCounter = 0; iCounter < argc; iCounter ++)
    {
        printf("%s\n", argv[iCounter]);
    }

    return 0;
}

/*OUTPUT :

argument.exe 10 20 30 40 string
argument.exe
10
20
30
40
string

argument + 19 -02 82 multi ;
Printing all arguemnts :
argument
+
19
-02
82
multi
;
*/