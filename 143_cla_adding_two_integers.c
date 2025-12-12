#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
    int iAns;

    if(argc != 3)
    {
        printf("Invalid Arguements : Please enter in following format\n$prog_name no1 no2\n");
        return -1;
    }

    iAns = atoi(argv[1]) + atoi(argv[2]);

    printf("Answer is %d", iAns);

    return 0;
}

/*
OUTPUT :    From Visual Studio Command Prompt (Not working on Visual Studio Code Terminal)

addition 10 20
Answer is 30

Invalid Arguements : Please enter in following format
$prog_name no1 no2
*/