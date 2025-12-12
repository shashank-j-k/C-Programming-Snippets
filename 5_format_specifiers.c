#include <stdio.h>
int main(void)
{
    long long int iNo = 10;
    float fPi;
    fPi = 22/7.0f;

    printf("Printing 89 in decimal format : %d\n", 89);                                             // 89
    printf("Printing -91 in decimal format : %d\n", -91);                                           // -91
    printf("Printing -1276 in unsigned decimal format : %u\n\n", -1276);                            // 4294966020

    printf("Printing 89 in octal format : %o\n", 89);                                               // 131
    printf("Printing 293 in hexadecimal(x) format : %x\n", 293);                                    // 125
    printf("Printing 789 in hexdecimal(X) format : %X\n", 789);                                     // 315
    printf("Printing 293 in octal format : %o\n", 293);                                             // 445
    printf("Printing 244 in hexadecimal(x) format : %x\n", 244);                                    // f4
    printf("Printing 509 in hexadecimal(X) format : %X\n\n", 509);                                  // 1FD

    printf("Printing 101 in decimal format : %d\n", 101);                                           // 101
    printf("Printing 0765 in octal to decimal format : %d\n", 0765);                                // 501
    printf("Printing 0141 in hexadecimal format : %x\n", 0141);                                     // 61
    printf("Printing F4 in hexadecimal to decimal format : %d\n\n", 0xF4);                          // 244

    printf("Printing 101 in charcater format : %c\n", 101);                                         // e
    printf("Printing v in decimal format : %d\n", 'V');                                             // 86
    printf("Printing -162 in character format : %c\n\n", -162);                                     // ^

    printf("Printing 696 in signed interger format : %i\n", 696);                                   // 696
    printf("Printing -728 in signed integer format : %i\n\n",-728);                                 // -728

    printf("Printing 1110119 in long decimal format : %ld\n", 1110119);                             // 1110119
    printf("Printing -596 in short decimal format : %hd\n", -596);                                  // -596
    printf("Printing 1283904 in long int format : %ld\n", 1283904);                                 // 1283904
    printf("Printing 1283904 in long long int format : %lld\n\n", iNo);                             // 10
    printf("Printing 1283904 in long long int format : %llu\n\n", iNo);                             // 10


    printf("Printing -91 in unsigned short decimal format : %hu\n", -91);                           // 65445
    printf("Printing 91 in unsigned long decimal format : %hu\n", 91);                              // 91
    printf("Printing 882882882 in unsigned long decimal format : %lu\n", 882882882);                // 882882882
    printf("Printing -910101 in unsigned long decimal format : %lu\n\n", -910101);                  // 4294057195  

    printf("Printing -4.187 in single floating point precision format : %f\n", -4.187);             // -4.187000
    printf("Printing fPi in single floating point precision format : %f\n\n", fPi);                 // 3.142857

    printf("Printing 811.91082 in single floating point precision format : %e\n", 811.91082);       // 8.119108e+002 
    printf("Printing fPi in single floating point precision format : %E\n\n", fPi);                 // 3.142857E+000 

    printf("Printing -8.713 in single floating point precision format : %g\n", -8.713);             // -8.713
    printf("Printing 91.028276445 in single floating point precision format : %g\n", 91.028276445); // 91.0283 
    printf("Printing 91.028276445 in single floating point precision format : %G\n", 91.02);        // 91.02 
    printf("Printing fPi in single floating point precision format : %G\n\n", fPi);                 // 3.14286

    printf("Printing -9.99913681234 in double floating point precision format : %lf\n", -9.99913681); //  -9.999137
    printf("Printing fPi in double floating point precision format : %lf\n\n", fPi);                // 3.142857  

    printf("Printing in string format : %s\n\n", "Welcome to India");                               // Welcome to India

    printf("Printing address : %p\n", &fPi);                                                        // 0061FF14                      
    printf("Printing address : %x\n", &fPi);                                                        // 61ff14                     
    printf("Printing address : %X\n", &fPi);                                                        // 61FF14                      
    printf("Printing address : %d\n", &fPi);                                                        // 6422292                     
    printf("Printing address : %o\n", &fPi);                                                        // 30377424                     

    return 0;
}

/*
*   LIST OF ALL FORMAT SPECIFIERS

*   %c      -   character
*   %d      -   signed integer
*   %e      -   signed single precision floating point value in exponent form (e)
*   %E      -   signed single precision floating point value in exponent form (E)
*   %f      -   signed single precision floating point value
*   %g      -   signed single precision floating point value either in e or f form
*   %G      -   signed single precision floating point value either in E or f form
*   %hd     -   signed short 
*   %hu     -   unsigned short
*   %i      -   signed integer
*   %ld     -   signed long int
*   %lf     -   signed double
*   %lu     -   unsigned long
*   %lld    -   signed long long int
*   %llu    -   unsigned long long int
*   %o      -   unsigned integer in ocatal numbering system
*   %p      -   pointer/ address
*   %s      -   character array/ character pointer
*   %u      -   unsigned int
*   %x      -   unsigned integer in hexadecimal numbering system (lower case)
*   %X      -   unsigned integer in hexadecimal numbering system (Upper case)
*/