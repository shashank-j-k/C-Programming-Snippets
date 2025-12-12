#include <stdio.h>

int main(void)
{
    unsigned int iNo;                                   // iNo has 4 bytes
    int iCounter;
    static int iFlag = 0;
    unsigned char *pPtr = (unsigned char*)&iNo;         // character pointer pointing to a integer which can access each byte of integer

    for(iCounter = 0; iCounter < 4; iCounter ++)
    {
        int iTemp;
        printf("Enter value for index %d :\t", iCounter);
        scanf("%d", &iTemp);
        if(iFlag == 1)                                  // If overflow then add the next input to the overflow
        {
            *pPtr = *pPtr + iTemp;
            *(pPtr + 1) = iTemp >> 8;                   // To save the overflow didgit
        }
        else
        {
            *pPtr = iTemp;                              // storing inputted values in each byte
            *(pPtr + 1) = iTemp >> 8;
        }

        if(iTemp > 255)                 
            iFlag = 1;                                  // if overflow set flag to 1
        else
            iFlag = 0;

        // printf("pPtr%d :\t%p\n", iCounter, pPtr);    // printing address for reference
        pPtr++;
    }

    pPtr = (char*)&iNo;                                 // making pPtr point to first byte of iNo again

    for(iCounter = 0; iCounter < 4; iCounter ++)        
    {
        printf("%d\t :\t%d\n", iCounter + 1, *pPtr);    // printing bytewise values
        pPtr ++;
    }

    printf("iNo = %d", iNo);                            // printing actual integer value

    return 0;
}

/*

OUTPUT & OBSERVATIONS:

----------------------------------------
Enter value for index 0 :       1
Enter value for index 1 :       0
Enter value for index 2 :       0
Enter value for index 3 :       0
1        :      1
2        :      0
3        :      0
4        :      0
iNo = 1
-----------------------------------------
Enter value for index 0 :       255
Enter value for index 1 :       0
Enter value for index 2 :       0
Enter value for index 3 :       0
1        :      255
2        :      0
3        :      0
4        :      0
iNo = 255
-----------------------------------------
Enter value for index 0 :       256
Enter value for index 1 :       0
Enter value for index 2 :       0
Enter value for index 3 :       0
1        :      0
2        :      1
3        :      0
4        :      0
iNo = 256
-----------------------------------------
Enter value for index 0 :       512
Enter value for index 1 :       0
Enter value for index 2 :       0
Enter value for index 3 :       0
1        :      0
2        :      2
3        :      0
4        :      0
iNo = 512
-----------------------------------------
Enter value for index 0 :       0  
Enter value for index 1 :       129
Enter value for index 2 :       0
Enter value for index 3 :       0
1        :      0
2        :      129
3        :      0
4        :      0
iNo = 33024
-----------------------------------------
Enter value for index 0 :       124
Enter value for index 1 :       129
Enter value for index 2 :       0
Enter value for index 3 :       0
1        :      124
2        :      129
3        :      0
4        :      0
iNo = 33148
-----------------------------------------
Enter value for index 0 :       265
Enter value for index 1 :       129
Enter value for index 2 :       0
Enter value for index 3 :       0
1        :      9
2        :      130
3        :      0
4        :      0
iNo = 33289
-----------------------------------------
Enter value for index 0 :       255
Enter value for index 1 :       255
Enter value for index 2 :       0
Enter value for index 3 :       0
1        :      255
2        :      255
3        :      0
4        :      0
iNo = 65535
-----------------------------------------
Enter value for index 0 :       0
Enter value for index 1 :       256
Enter value for index 2 :       0 
Enter value for index 3 :       0
1        :      0
2        :      0
3        :      1
4        :      0
iNo = 65536
-----------------------------------------
Enter value for index 0 :       255
Enter value for index 1 :       255
Enter value for index 2 :       255
Enter value for index 3 :       0
1        :      255
2        :      255
3        :      255
4        :      0
iNo = 16777215
-----------------------------------------
Enter value for index 0 :       0
Enter value for index 1 :       0
Enter value for index 2 :       0
Enter value for index 3 :       1
1        :      0
2        :      0
3        :      0
4        :      1
iNo = 16777216
-----------------------------------------
Enter value for index 0 :       255
Enter value for index 1 :       255
Enter value for index 2 :       255
Enter value for index 3 :       127
1        :      255
2        :      255
3        :      255
4        :      127
iNo = 2147483647
-----------------------------------------
Enter value for index 0 :       255
Enter value for index 1 :       255
Enter value for index 2 :       255
Enter value for index 3 :       128
1        :      255
2        :      255
3        :      255
4        :      128
iNo = -2130706433
-----------------------------------------
OBSERVATIONS :

                ____________________________________________________________________
                |______________|_______________|_________________|__________________|    iNo(4bytes)
                <------------->|<------------->|<--------------->|<---------------->|
                    0                   1               2                    3           Index
 can store upto:     0-255        256- 65535     65536-16777215    16777216-2147483647
 i.e.               (256)        (256)*(256)   (256)*(256)*(256)  (256)*(256)*(256)*(128)
 value
*/