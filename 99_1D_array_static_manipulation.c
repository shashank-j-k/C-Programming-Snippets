#include <stdio.h>

int main(void)
{
    int arRay[] = {10, 20, 30, 40, 50};

    printf("&arRay\t\t = \t%d\n", &arRay);                      // 6422284 (6422284 - 6422304)
    // &(1D cha nav) -> sampurna arRay cha address
    printf("arRay\t\t = \t%d\n\n", arRay);                      // 6422284 (6422284 - 6422288)
    // 1D cha nav -> 1st element cha address 
    
    printf("*arRay\t\t = \t%d\n", *arRay);                      // 10
    // *(1D cha nav) -> element cha nav (value)
    printf("*arRay + 1\t = \t%d\n\n", *arRay + 1);              // 11
    // *(1D cha nav) -> element cha nav (value) -> value + 1

    printf("arRay + 1\t = \t%d\n", arRay + 1);                  // 6422288
    // 1D cha nav -> 1st element cha address + 1 -> ele size ne pudhe
    printf("&arRay + 1 \t = \t%d\n\n", &arRay + 1);             // 6422304
    // &(1D cha nav) + 1-> 1D size ne pudhe

    printf("arRay[2]\t = \t%d\n", arRay[2]);                    // 30
    // 1D chya 2nd index chya element cha nav (value)
    printf("arRay[2] + 1\t = \t%d\n\n", arRay[2] + 1);          // 31
    // value + 1

    printf("*arRay + 2  \t = \t%d\n", *arRay + 2);              // 12
    // *(1D cha nav) -> element cha nav (value) + 2 -> value + 2
    printf("*(arRay + 2)\t = \t%d\n\n", *(arRay + 2));          // 30
    // same as arRay[2] -> value

    printf("*arRay + 2 + 1   = \t%d\n", *arRay + 2 + 1);        // 13
    // *(1D cha nav) -> element cha nav (value) + 2 + 1
    printf("*(arRay + 2) + 1 = \t%d\n\n", *(arRay + 2) + 1 );   // 31
    // same as arRay[2] + 1 -> value + 1

    printf("&arRay[2]\t = \t%d\n", &arRay[2]);                  // 6422292
    // &(1D chya 2nd element cha nav) -> address of 2nd index element
    printf("&arRay[2] + 1\t = \t%d\n", &arRay[2] + 1);          // 6422296
    // 1D chya 2nd element cha address + 1 -> element size ne pudhe

    return 0;
}