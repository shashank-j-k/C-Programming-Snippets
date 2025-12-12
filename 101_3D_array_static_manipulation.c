#include <stdio.h>

int main(void)
{
    int ar3DArray[3][2][4] = {10, 20, 30, 40, 50, 60 ,70 ,80, 90};

    printf("size of 3D\t\t\t:\t%d\n", sizeof(ar3DArray));                               // 96
    printf("size of 2D\t\t\t:\t%d\n", sizeof(ar3DArray[0]));                            // 32
    printf("size of 1D\t\t\t:\t%d\n", sizeof(ar3DArray[0][0]));                         // 16
    printf("size of elem\t\t\t:\t%d\n\n", sizeof(ar3DArray[0][0][0]));                  // 4

    printf("ar3DArray[0]\t\t\t:\t%d\n", ar3DArray[0]);                                  // 6422208 (6422208 - 6422224)
    // 3D -> 0th index cha 2D cha nav -> 1D cha addr
    printf("ar3DArray[0][0]\t\t\t:\t%d\n", ar3DArray[0][0]);                            // 6422208 (6422208 - 6422212)
    // 3D -> 0th index cha 2D -> 0th index cha 1D cha nav -> elem cha addr
    printf("ar3DArray[0][0][0]\t\t:\t%d\n\n", ar3DArray[0][0][0]);                      // 10
    // 3D -> 0th index cha 2D -> 0th index cha 1D -> 0th index cha elem cha nav (value)

    printf("ar3DArray[1]\t\t\t:\t%d\n", ar3DArray[1]);                                  // 6422240 (6422240 - 6422256)
    // 3D -> 1st index cha 2D cha nav -> 1D cha addr
    printf("ar3DArray[1][0]\t\t\t:\t%d\n", ar3DArray[1][0]);                            // 6422240 (6422240 - 6422244)
    // 3D -> 1st index cha 2D -> 0th index cha 1D cha nav -> elem cha addr
    printf("ar3DArray[1][0][0]\t\t:\t%d\n\n", ar3DArray[1][0][0]);                      // 90
    // 3D -> 1st index cha 2D -> 0th index cha 1D -> 0th index cha elem cha nav (value)

    printf("ar3DArray[2]\t\t\t:\t%d\n", ar3DArray[2]);                                  // 6422272 (6422272 - 6422288)
    // 3D -> 2nd index cha 2D cha nav -> 1D cha addr
    printf("ar3DArray[2][0]\t\t\t:\t%d\n", ar3DArray[2][0]);                            // 6422272 (6422272 - 6422276)
    // 3D -> 2nd index cha 2D -> 0th index cha 1D cha nav -> elem cha addr
    printf("ar3DArray[2][0][0]\t\t:\t%d\n\n", ar3DArray[2][0][0]);                      // 0
    // 3D -> 2nd index cha 2D -> 0th index cha 1D -> 0th index cha elem cha nav (value)

    printf("ar3DArray[0] + 1\t\t:\t%d\n", ar3DArray[0] + 1);                            // 6422224
    // 3D -> 0th index cha 2D cha nav -> 1D cha addr + 1 -> 1D size ne pudhe
    printf("ar3DArray[0][0] + 1\t\t:\t%d\n", ar3DArray[0][0] + 1);                      // 6422212
    // 3D -> 0th index cha 2D -> 0th index cha 1D cha nav -> elem cha addr -> elem size ne pudhe
    printf("ar3DArray[0][0][0] + 1\t\t:\t%d\n\n", ar3DArray[0][0][0] + 1);              // 11
    // 3D -> 0th index cha 2D -> 0th index cha 1D -> 0th index cha elem cha nav -> (value + 1)

    printf("ar3DArray[1] + 1\t\t:\t%d\n", ar3DArray[1] + 1);                            // 6422256 
    // 3D -> 1st index cha 2D cha nav -> 1D cha addr + 1 -> 1D size ne pudhe
    printf("ar3DArray[1][0] + 1\t\t:\t%d\n", ar3DArray[1][0] + 1);                      // 6422244
    // 3D -> 1st index cha 2D -> 0th index cha 1D cha nav -> elem cha addr -> elem size ne pudhe
    printf("ar3DArray[1][0][0] + 1\t\t:\t%d\n\n", ar3DArray[1][0][0] + 1);              // 91
    // 3D -> 1st index cha 2D -> 0th index cha 1D -> 0th index cha elem cha nav -> (value + 1)

    printf("ar3DArray[2] + 1\t\t:\t%d\n", ar3DArray[2] + 1);                            // 6422288
    // 3D -> 2nd index cha 2D cha nav -> 1D cha addr + 1 -> 1D size ne pudhe
    printf("ar3DArray[2][0] + 1\t\t:\t%d\n", ar3DArray[2][0] + 1);                      // 6422276 
    // 3D -> 2nd index cha 2D -> 0th index cha 1D cha nav -> elem cha addr -> elem size ne pudhe
    printf("ar3DArray[2][0][0] + 1\t\t:\t%d\n\n", ar3DArray[2][0][0] + 1);              // 1
    // 3D -> 2nd index cha 2D -> 0th index cha 1D -> 0th index cha elem cha nav -> (value + 1)

    printf("&ar3DArray\t\t\t:\t%d\n", &ar3DArray);                                      // 6422208 (6422208 - 6422304)
    // &(3D cha nav) -> sampurna 3D cha addr
    printf("ar3DArray\t\t\t:\t%d\n\n", ar3DArray);                                      // 6422208 (6422208 - 6422240)
    // 3D cha nav -> 2D cha addr

    printf("*ar3DArray\t\t\t:\t%d\n", *ar3DArray);                                      // 6422208 (6422208 - 6422224)
    // 3D cha nav -> * -> 2D cha nav -> 1D cha addr
    printf("**ar3DArray\t\t\t:\t%d\n", **ar3DArray);                                    // 6422208 (6422208 - 6422212)
    // 3D cha nav -> * -> 2D cha nav -> * -> 1D cha nav -> elem cha addr
    printf("***ar3DArray\t\t\t:\t%d\n\n", ***ar3DArray);                                // 10
    // 3D cha nav -> * -> 2D cha nav -> * -> 1D cha nav -> * -> elem cha nav (value)

    printf("&ar3DArray + 1\t\t\t:\t%d\n", &ar3DArray + 1);                              // 6422304
    // &(3D cha nav) -> 3D size ne pudhe
    printf("ar3DArray + 1\t\t\t:\t%d\n\n", ar3DArray + 1);                              // 6422240
    // 3D cha nav -> 2D cha addr -> 2D size ne pudhe

    printf("*ar3DArray + 1\t\t\t:\t%d\n", *ar3DArray + 1);                              // 6422224
    // 3D cha nav -> * -> 2D cha nav -> 1D cha addr -> 1D size ne pudhe
    printf("**ar3DArray + 1\t\t\t:\t%d\n", **ar3DArray + 1);                            // 6422212
    // 3D cha nav -> * -> 2D cha nav -> * -> 1D cha nav -> elem cha addr -> elem size ne pudhe
    printf("***ar3DArray + 1\t\t:\t%d\n\n", ***ar3DArray + 1);                          // 11
    // 3D cha nav -> * -> 2D cha nav -> * -> 1D cha nav -> * -> elem cha nav (value + 1)

    printf("&ar3DArray[2][0]\t\t:\t%d\n", &ar3DArray[2][0]);                            // 6422272 (6422272 - 6422288)
    // &(3D -> 2nd index cha 2D -> 0th index cha 1D) -> 1D cha addr
    printf("&ar3DArray[2][0] + 1\t\t:\t%d\n\n", &ar3DArray[2][0] + 1);                  // 6422288
    // &(3D -> 2nd index cha 2D -> 0th index cha 1D) -> 1D size ne pudhe

    printf("&(*ar3DArray)\t\t\t:\t%d\n", &(*ar3DArray));                                // 6422208 (6422208 - 6422240)
    // &(3D cha nav -> * -> 2D cha nav) -> 2 cha addr
    printf("&(*ar3DArray) + 1\t\t:\t%d\n\n", &(*ar3DArray) + 1);                        // 6422240
    // &(3D cha nav -> * -> 2D cha nav) -> 2 cha addr -> 2D size ne pudhe

    printf("ar3DArray + 2\t\t\t:\t%d\n", ar3DArray + 2);                                // 6422272
    // 3D cha nav -> 2D cha addr -> 2D size ne pudhe 2 vela
    printf("*(ar3DArray + 2)\t\t:\t%d\n", *(ar3DArray + 2));                            // 6422272 (6422272 - 6422288)
    // same as ar3DArray[2] -> 3D -> 2nd index cha 2D cha nav -> 1D cha addr
    printf("*(ar3DArray + 2) + 1\t\t:\t%d\n", *(ar3DArray + 2) + 1);                    // 6422288
    // same as ar3DArray[2] + 1 -> 3D -> 2nd index cha 2D cha nav -> 1D cha addr -> 1D size ne pudhe   
    printf("*(*(ar3DArray + 2) + 1)\t\t:\t%d\n", *(*(ar3DArray + 2) + 1));              // 6422288 (6422288 - 6422292)
    // same as ar3DArray[2][1] -> 3D -> 2nd index cha 2D -> 1st index cha 1D cha nav -> elem cha addr   
    printf("*(*(ar3DArray + 2) + 1) + 3\t:\t%d\n", *(*(ar3DArray + 2) + 1) + 3);        // 6422300
    // same as ar3DArray[2][1] + 1-> 3D -> 2nd index cha 2D -> 1st index cha 1D cha nav -> elem cha addr -> elem size ne 3 vela pudhe
    printf("*(*(*(ar3DArray + 2) + 1) + 3)\t:\t%d\n", *(*(*(ar3DArray + 2) + 1) + 3));  // 0
    // same as ar3DArray[2][1][3] -> 3D -> 2nd index cha 2D -> 1st index cha 1D -> 3rd index cha elem cha nav (value)


    printf("*ar3DArray[1]\t\t\t:\t%d\n", *ar3DArray[1]);                                // 6422240 (6422240 - 6422244)
    // 3D cha 1st index cha 2D cha nav -> * -> 1D cha nav -> elem cha addr
    printf("**ar3DArray[1]\t\t\t:\t%d\n", **ar3DArray[1]);                              // 90
    // 3D cha 1st index cha 2D cha nav -> * -> 1D cha nav -> * -> elem cha nav (value)
    printf("***ar3DArray\t\t\t:\t%d\n\n", ***ar3DArray);                                // 10
    // 3D cha nav -> * -> 2D cha nav -> * -> 1D cha nav -> * -> elem cha nav (value)
    
    return 0;
}

/*
OUTPUT :

size of 3D                      :       96
size of 2D                      :       32     
size of 1D                      :       16     
size of elem                    :       4      

ar3DArray[0]                    :       6422208
ar3DArray[0][0]                 :       6422208
ar3DArray[0][0][0]              :       10     

ar3DArray[1]                    :       6422240
ar3DArray[1][0]                 :       6422240
ar3DArray[1][0][0]              :       90     

ar3DArray[2]                    :       6422272
ar3DArray[2][0]                 :       6422272
ar3DArray[2][0][0]              :       0      

ar3DArray[0] + 1                :       6422224
ar3DArray[0][0] + 1             :       6422212
ar3DArray[0][0][0] + 1          :       11     

ar3DArray[1] + 1                :       6422256
ar3DArray[1][0] + 1             :       6422244
ar3DArray[1][0][0] + 1          :       91     

ar3DArray[2] + 1                :       6422288
ar3DArray[2][0] + 1             :       6422276
ar3DArray[2][0][0] + 1          :       1      

&ar3DArray                      :       6422208
ar3DArray                       :       6422208

*ar3DArray                      :       6422208
**ar3DArray                     :       6422208
***ar3DArray                    :       10

&ar3DArray + 1                  :       6422304
ar3DArray + 1                   :       6422240

*ar3DArray + 1                  :       6422224
**ar3DArray + 1                 :       6422212
***ar3DArray + 1                :       11

&ar3DArray[2][0]                :       6422272
&ar3DArray[2][0] + 1            :       6422288

&(*ar3DArray)                   :       6422208
&(*ar3DArray) + 1               :       6422240

ar3DArray + 2                   :       6422272
*(ar3DArray + 2)                :       6422272
*(ar3DArray + 2) + 1            :       6422288
*(*(ar3DArray + 2) + 1)         :       6422288
*(*(ar3DArray + 2) + 1) + 3     :       6422300
*(*(*(ar3DArray + 2) + 1) + 3)  :       0
*ar3DArray                      :       6422240
**ar3DArray                     :       90
***ar3DArray                    :       10

*/