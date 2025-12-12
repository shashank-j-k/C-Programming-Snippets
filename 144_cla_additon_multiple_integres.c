#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int iSum = 0;
    int iCounter;

    for(iCounter = 1; iCounter < argc; iCounter ++)
    {
        iSum = iSum + atoi(argv[iCounter]);
    }

    printf("Addition is %d", iSum);

    return 0;
}

/*
OUTPUT :

addition 10 20 30 40
Addition is 100

addition 10 20 30 40 50 60 70 80 90 100
Addition is 550

addition
Addition is 0
*/