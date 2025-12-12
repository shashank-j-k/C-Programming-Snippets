#include <stdio.h>

int main(void)
{
    int iNo1 = 0;
    int iNo2 = 1;
    int iNo3 = 2;
    int iAns;

    iAns = ++iNo1 || ++iNo2 && ++iNo3;

    printf("%d %d %d %d", iNo1, iNo2, iNo3, iAns);    // 1 1 2 1

    return 0;
}

/*

    Explanation:
    
            iAns = ++iNo1 || ++iNo2 && ++iNo3;          precedence of && is more than || and increment is even greater than that of &&
    Hence,  iAns = (++iNo1) || ((++iNo2) && (++iNo3))   after binding solving oerder is always L->R
            iAns = (1) || ((++iNo2) && (++iNo3))
                                    ^
                                not executed
            iAns = 1
            iNo1 = 1
            iNo2 = 1
            iNo3 = 2  
        
*/