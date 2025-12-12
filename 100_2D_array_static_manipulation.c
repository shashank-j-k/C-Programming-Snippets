#include <stdio.h>

int main (void)
{
    int ar2DArray[3][4] = {10, 20, 30, 40, 50};

    printf("&ar2DArray\t\t = \t%d\n", &ar2DArray);                          // 6422256 (6422256 - 6422304)
    // &(2D cha nav) -> Sampurna 2D cha addr
    printf("ar2DArray\t\t = \t%d\n\n", ar2DArray);                          // 6422256 (6422256 - 6422272)
    // 2Dcha nav -> 1D cha Address

    printf("ar2DArray[0]\t\t = \t%d\n", ar2DArray[0]);                      // 6422256 (6422256 - 6422260)
    // 2D -> 0th index cha 1D cha nav -> 1st elem cha addr
    printf("ar2DArray[1]\t\t = \t%d\n", ar2DArray[1]);                      // 6422272 (6422272 - 6422276)
    // 2D -> 1st index cha 1D cha nav -> elem cha addr
    printf("ar2DArray[2]\t\t = \t%d\n\n", ar2DArray[2]);                    // 6422288 (6422288 - 6422292)
    // 2D -> 2nd index cha 1D cha nav -> elem cha addr


    printf("ar2DArray[0][0]\t\t = \t%d\n", ar2DArray[0][0]);                // 10
    //2D -> 0th index cha 1D -> 0th index cha elem cha nav(value)
    printf("ar2DArray[1][0]\t\t = \t%d\n", ar2DArray[1][0]);                // 50
    //2D -> 1st index cha 1D -> 0th index cha elem cha nav(value)           
    printf("ar2DArray[2][0]\t\t = \t%d\n\n", ar2DArray[2][0]);              // 0
    //2D -> 2nd index cha 1D -> 0th index cha elem cha nav(value)          

    printf("&ar2DArray[0]\t\t = \t%d\n", &ar2DArray[0]);                    // 6422256 (6422256 - 6422272)
    // 2D -> 0th index cha 1D cha addr                             
    printf("&ar2DArray[1]\t\t = \t%d\n", &ar2DArray[1]);                    // 6422272 (6422272 - 6422288)
    // 2D -> 1st index cha 1D cha addr                             
    printf("&ar2DArray[2]\t\t = \t%d\n\n", &ar2DArray[2]);                  // 6422288 (6422288 - 6422304)
    // 2D -> 2nd index cha 1D cha addr                             

    printf("&ar2DArray[0][0]\t = \t%d\n", &ar2DArray[0][0]);                // 6422256 (6422256 - 6422260)
    // &(2D -> 0th index cha 1D -> 0th index element cha nav) -> elem cha addr
    printf("&ar2DArray[1][0]\t = \t%d\n", &ar2DArray[1][0]);                // 6422272 (6422272 - 6422276)
    // &(2D -> 1st index cha 1D -> 0th index element cha nav) -> elem cha addr
    printf("&ar2DArray[2][0]\t = \t%d\n\n", &ar2DArray[2][0]);              // 6422288 (6422288 - 6422292)
    // &(2D -> 2nd index cha 1D -> 0th index element cha nav) -> elem cha addr

    printf("&ar2DArray + 1\t\t = \t%d\n", &ar2DArray + 1);                  // 6422304
    // &(2D cha nav) -> 2D size ne pudhe
    printf("ar2DArray + 1\t\t = \t%d\n\n", ar2DArray + 1);                  // 6422272
    // 2D cha nav ->  1D cha addr -> 1D size ne pudhe
    

    printf("ar2DArray[0] + 1\t = \t%d\n", ar2DArray[0] + 1);                // 6422260 
    // 2D -> 0th index cha 1D cha nav -> elem cha addr -> elem size ne pudhe
    printf("ar2DArray[1] + 1\t = \t%d\n", ar2DArray[1] + 1);                // 6422276 
    // 2D -> 1st index cha 1D cha nav -> elem cha addr -> elem size ne pudhe
    printf("ar2DArray[2] + 1\t = \t%d\n\n", ar2DArray[2] + 1);              // 6422292 
    // 2D -> 2nd index cha 1D cha nav -> elem cha addr -> elem size ne pudhe

    printf("ar2DArray[0][0] + 1\t = \t%d\n", ar2DArray[0][0] + 1);          // 11
    // 2D-> 0th index cha 1D -> 0th index cha elem cha nav ->(value + 1)
    printf("ar2DArray[1][0] + 1\t = \t%d\n", ar2DArray[1][0] + 1);          // 51
    // 2D-> 1st index cha 1D -> 0th index cha elem cha nav -> (value + 1) 
    printf("ar2DArray[2][0] + 1\t = \t%d\n\n", ar2DArray[2][0] + 1);        // 1
    // 2D-> 2nd index cha 1D -> 0th index cha elem cha nav -> (value + 1)

    printf("&ar2DArray[0] + 1\t = \t%d\n", &ar2DArray[0] + 1);              // 6422272 
    // 2D -> 0th index cha 1D cha addr -> 1D Size ne pudhe
    printf("&ar2DArray[1] + 1\t = \t%d\n", &ar2DArray[1] + 1);              // 6422288
    // 2D -> 1st index cha 1D cha addr -> 1D Size ne pudhe
    printf("&ar2DArray[2] + 1\t = \t%d\n\n", &ar2DArray[2] + 1);            // 6422304
    // 2D -> 2nd index cha 1D cha addr -> 1D Size ne pudhe

    printf("&ar2DArray[0][0] + 1\t = \t%d\n", &ar2DArray[0][0] + 1);        // 6422260 
    // &(2D -> 0th index cha 1D -> 0th index cha elem) -> elem size ne pudhe
    printf("&ar2DArray[1][0] + 1\t = \t%d\n", &ar2DArray[1][0] + 1);        // 6422276
    // &(2D -> 1st index cha 1D -> 0th index cha elem) -> elem size ne pudhe
    printf("&ar2DArray[2][0] + 1\t = \t%d\n\n", &ar2DArray[2][0] + 1);      // 6422292
    // &(2D -> 2nd index cha 1D -> 0th index cha elem) -> elem size ne pudhe

    printf("*ar2DArray\t\t = \t%d\n", *ar2DArray);                          // 6422256 (6422256 -  6422260)
    // 2D cha nav -> * -> 1D cha nav -> elem cha addr
    printf("*ar2DArray + 1\t\t = \t%d\n\n", *ar2DArray + 1);                // 6422260 
    // 2D cha nav -> * -> 1D cha nav -> elem cha addr -> elem sizx ne pudhe

    printf("**ar2DArray\t\t = \t%d\n", **ar2DArray);                        // 10
    // 2D cha nav -> * -> 1D cha nav -> * -> elem cha nav(value)
    printf("**ar2DArray + 1\t\t = \t%d\n\n", **ar2DArray + 1);              // 11
    // 2D cha nav -> * -> 1D cha nav -> * -> elem cha nav(value) + 1        

    printf("ar2DArray + 2\t\t = \t%d\n", ar2DArray + 2);                    // 6422288  
    // 2D cha nav -> 1D cha addr -> 1D size ne 2 vela pudhe
    printf("*(ar2DArray + 2)\t = \t%d\n\n", *(ar2DArray + 2));              // 6422288 (6422288 - 6422292)
    // same as ar2DArray[2] -> 2D -> 2nd index cha 1D cha nav -> elem cha addr

    printf("*(ar2DArray + 2) + 3\t = \t%d\n", *(ar2DArray + 2) + 3);        // 6422300 
    // solving
    printf("*(*(ar2DArray + 2) + 3)\t = \t%d\n\n", *(*(ar2DArray + 2) + 3));// 0
    // same as ar2DArray[2][3]
    
    return 0;
}

    // *(ar2DArray + 2) + 3                     2D cha nav -> 1D cha addr
    // *(6422256 + 2 * sizeof(datatype)) + 3 
    // *(6422256 + 2 * sizeof(1D)) + 3 
    // *(6422256 + 2 * 16) + 3 
    // *(6422256 + 32) + 3 
    // *(6422288) + 3                           2D cha nav -> 1D cha addr
    // 6422288 + 3 * size of(datatype)          *(1D cha addr) -> elem cha addr
    // 6422288 + 3 * size of(int)
    // 6422288 + 3 * 4
    // 6422288 + 12
    // 6422300




                                             

