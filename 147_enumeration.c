#include <stdio.h>

enum COMBINATION {series = 1, parallel = 2};
enum SWITCH {off, on};

int main(void)
{
    enum SWITCH oS1;
    enum SWITCH oS2;
    enum COMBINATION oCircuit;

    printf("Enter the type of circuit (Series = 1, Parallel = 2) : ");
    scanf("%d", &oCircuit);

    printf("\nEnter the states of switches S1 and S2 (off = 0, on = 1) : ");
    scanf("%d %d", &oS1, &oS2);

    if(oCircuit == series)
    {
        if(oS1 == on && oS2 == on)
        {
            printf("\nBulb will glow\n");
        }
        else
            printf("\nBulb will not glow\n");

    }

        if(oCircuit == parallel)
    {
        if(oS1 == on || oS2 == on)
        {
            printf("\nBulb will glow\n");
        }
        else
            printf("\nBulb will not glow\n");

    }

    return 0;
}

/*
OUTPUT :

Enter the type of circuit (Series = 1, Parallel = 2) : 1

Enter the states of switches S1 and S2 (off = 0, on = 1) : 0 1 

Bulb will not glow
---------------------------------------------------------------------
Enter the type of circuit (Series = 1, Parallel = 2) : 1

Enter the states of switches S1 and S2 (off = 0, on = 1) : 1 1

Bulb will glow
---------------------------------------------------------------------
*/