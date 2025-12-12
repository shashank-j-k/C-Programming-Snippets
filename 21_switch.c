#include <stdio.h>

int main(void)
{
    switch(2)               // its just an example, of course don't pass literal here
    {
        case 1:
            printf("One");
        case 2:
            printf("Two");
        case 3:
            printf("Three\n");
    }
// TwoThree

    switch(3)              
    {
        case 1:
            printf("One");
        case 2:
            printf("Two");
        case 3:
            printf("Three\n");
    }
// Three

    switch(5)              
    {
        case 1:
            printf("One");
        case 2:
            printf("Two");
        case 3:
            printf("Three");
        default:
            printf("Default\n");
    }
// Default

    switch(5)              
    {
        case 1:
            printf("One");
        default:
            printf("Default");
        case 3:
            printf("Two");
        case 4:
            printf("Three\n");
    }
//DefaultTwoThree

    switch(5)              
    {
        case 1:
            printf("One");
        case 2:
            printf("Two");
        case 3:
            printf("Three\n");
    }
// No Output

return 0;
}

/*
    RULES FOR case labelled statements:

    *   It has to be a compile time constant (i.e. literal constant(1, 'a', etc) or symbollic constant(#define))
    *   It cannot be a qualified constant (const int iNo = 4;)
    *   It cannot be a floating point constant or a string
    *   Each case id has to be unique. Two case id cannot be same (i.e. 65, 'A')

    WORKING OF switch statement

    *   It searches for the matching case with input expression
    *   If found then it starts the execution from that statement and follows through until it encounters a break statement
    *   If not found then it searcghes for the default labelled statement
    *   If found then starts execution from there
    *   If default not found the execution control goes outside switch

*/