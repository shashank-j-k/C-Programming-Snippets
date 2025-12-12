#include <stdio.h>

int main(void)
{
    printf("Size of int = %d\n",sizeof(int));                               // 4
    printf("Size of short int = %d\n",sizeof(short int));                   // 2
    printf("Size of short = %d\n",sizeof(short));                           // 2
    printf("Size of long = %d\n",sizeof(long));                             // 4
    printf("Size of long int = %d\n",sizeof(long int));                     // 4
    printf("Size of long long int = %d\n",sizeof(long long int));           // 8

    printf("Size of char = %d\n",sizeof(char));                             // 1
    //printf("Size of short char = %d\n",sizeof(short char));               // error: both 'short' and 'char' in declaration specifiers
    //printf("Size of long char = %d\n",sizeof(long char));                 // error: both 'long' and 'char' in declaration specifiers
    //printf("Size of long long char= %d\n",sizeof(long long char));        // error: both 'long' and 'char' in declaration specifiers

    printf("Size of float = %d\n",sizeof(float));                           // 4
    //printf("Size of short float = %d\n",sizeof(short float));             // error: both 'short' and 'float' in declaration specifiers
    // printf("Size of long float = %d\n",sizeof(long float));               // error: both 'long' and 'float' in declaration specifiers 
    //printf("Size of long long float = %d\n",sizeof(long long float));     // error: both 'long' and 'float' in declaration specifiers

    printf("Size of double = %d\n",sizeof(double));                         // 8 
    //printf("Size of short double = %d\n",sizeof(short double));           // error: both 'long' and 'float' in declaration specifiers
    //printf("Size of long double = %d\n",sizeof(long double));             // error: both 'short' and 'double' in declaration specifiers
    //printf("Size of long long double = %d\n",sizeof(long long double));   // error: both 'long long' and 'double' in declaration specifiers

    return 0;
}

