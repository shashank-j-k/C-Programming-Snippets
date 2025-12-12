#include <stdio.h>

// struct date1              // size = 24 bytes
// {
//     int iDay;
//     int iMonth;
//     int iYear;
//     int iHour;
//     int iMinutes;
//     int iSeconds;
// };

// struct date2             // size = 8
// {
//     unsigned int iDay : 5;          // (1-31) => 16 + 8 + 4 + 2 + 1 = 31 => 5 bits are enough
//     unsigned int iMonth : 4;        // (1-12) => 8 + 4 + 0 + 0 => 4 bits are enough
//     unsigned int iHour : 4;         // (1-12) => 8 + 4 + 0  + 0 => 4 bits are enough
//     unsigned int iMinutes : 6;      // (0-60) => 32 + 16 + 8 + 4 + 0  + 0 => 6 bits are enough 
//     unsigned int iSeconds : 6;      // (0-60) => 32 + 16 + 8 + 4 + 0  + 0 => 6 bits are enough
//     unsigned int iYear;
// };

struct date                 // size = 12
{
    unsigned int iDay : 5;          // (1-31) => 16 + 8 + 4 + 2 + 1 = 31 => 5 bits are enough       (int 1 : 5 bits of 32 bits)
    unsigned int iMonth : 4;        // (1-12) => 8 + 4 + 0 + 0 => 4 bits are enough                 (int 1 : 9 bitsof 32 bits)
    int : 0;                        // to stop bitfield effect
    unsigned int iHour : 4;         // (1-12) => 8 + 4 + 0  + 0 => 4 bits are enough                (int 2 : 4 bits of 32 bits)
    unsigned int iMinutes : 6;      // (0-60) => 32 + 16 + 8 + 4 + 0  + 0 => 6 bits are enough      (int 2 : 10 bits of 32 bits)
    unsigned int iSeconds : 6;      // (0-60) => 32 + 16 + 8 + 4 + 0  + 0 => 6 bits are enough      (int 2 : 16 bits os 32 bits)
    unsigned int iYear;             //                                                              (int 3)
};

// struct date3             // size = 6 bytes
// {
//     unsigned char iDay : 5;          // (1-31) => 16 + 8 + 4 + 2 + 1 = 31 => 5 bits are enough
//     unsigned char iMonth : 4;        // (1-12) => 8 + 4 + 0 + 0 => 4 bits are enough
//     unsigned char iHour : 4;         // (1-12) => 8 + 4 + 0  + 0 => 4 bits are enough
//     unsigned char iMinutes : 6;      // (0-60) => 32 + 16 + 8 + 4 + 0  + 0 => 6 bits are enough 
//     unsigned char iSeconds : 6;      // (0-60) => 32 + 16 + 8 + 4 + 0  + 0 => 6 bits are enough
//     unsigned short int iYear;
// };

int main(void)
{
    struct date oObj;

    printf("sizeof(oObj) = %d\n\n", sizeof(oObj));

    oObj.iDay = 13;
    oObj.iMonth = 8;
    oObj.iYear = 2025;
    oObj.iHour = 11;
    oObj.iMinutes = 26;
    oObj.iSeconds= 50;

    printf("Date is %d/%d/%d\n", oObj.iDay, oObj.iMonth, oObj.iYear);
    printf("Time is %d:%d:%d\n", oObj.iHour, oObj.iMinutes, oObj.iSeconds);

    return 0;
}


/*
OUTPUT : 

For struct date1 :

    sizeof(oObj) = 24

    Date is 13/8/2025
    Time is 2025:2025:2025
---------------------------
For struct date2 :

    sizeof(oObj) = 8

    Date is 13/8/2025
    Time is 9:41:41
---------------------------
For struct date :

    sizeof(oObj) = 12

    Date is 13/8/2025
    Time is 11:26:50
---------------------------
For struct date3 :

    sizeof(oObj) = 6

    Date is 13/8/2025
    Time is 11:26:50
*/