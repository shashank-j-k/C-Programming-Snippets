#include<stdio.h>

int main (void)
{
    int arArray[] = {10, 20, 30, 40, 50};

    printf("&arArray\t:\t%d\n", &arArray);                                  
    // & 1D cha nav => 1D cha Address

    printf("arArray\t\t:\t%d\n", arArray);
    // 1D cha nav => 1st element cha Address

    printf("&arArray + 1\t:\t%d\n", &arArray + 1);
    // & 1D cha nav => 1D size ne pudhe

    printf("arArray + 1\t:\t%d\n", arArray + 1);
    // 1D cha nav => element size ne pudhe

    printf("arArray[2]\t:\t%d\n", arArray[2]);
    // 1D chya 2nd index walya element cha nav => value

    printf("&arArray[2]\t:\t%d\n", &arArray[2]);
    // & 1D chya 2nd index walya element cha nav => 2nd index walya element cha address

    printf("arArray[2] + 1\t:\t%d\n", arArray[2] + 1);
    // 1d chya 2nd index walya element cha nav => value + 1

    printf("&arArray[2] + 1\t:\t%d\n", &arArray[2] + 1);
    // & 1D chya 2nd  index walya element cha nav => 2nd index walya element chya size ne pudhe

    printf("&arArray[1]\t:\t%d\n", &arArray[1]);
    // & 1D chya 1st  index walya element cha nav => 1st index walya element cha address

    printf("&arArray[1] + 2\t:\t%d\n", &arArray[1] + 2);
    // & 1D chya 1st  index walya element cha nav => element size ne 2 vela pudhe

    //printf("%d", ++ arArray);           // error: lvalue required as increment operand
    // arArray = arArray + 1 => 100 = 100 + 4 => 100 = 104

    //printf("%d", arArray ++);           // error: lvalue required as increment operand
    // arArray = arArray + 1 => 100 = 100 + 4 => 100 = 104

    return 0;
}

/*
OUTPUT :

&arArray        :       6422284
arArray         :       6422284
&arArray + 1    :       6422304
arArray + 1     :       6422288
arArray[2]      :       30
&arArray[2]     :       6422292
arArray[2] + 1  :       31
&arArray[2] + 1 :       6422296
&arArray[1]     :       6422288
&arArray[1] + 2 :       6422296
*/