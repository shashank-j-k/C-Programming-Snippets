#include <stdio.h>
#include <string.h>

void ** Fun1(void(*(*)[])(void));
void ** Fun2(void(*(*)[])(void));
void ** Fun3(void(*(*)[])(void));

void ParamFun1(void);
void ParamFun2(void);
void ParamFun3(void);
void ParamFun4(void);
void ParamFun5(void);

int main(void)
{
    int iCounter1;
    int iCounter2;
    void **pRet = NULL;

    void **((*(*p)[3])(void(*(*)[5])(void))) = NULL;
    void(*(*pPtr)[5])(void) = NULL;
    void **(*arArray[3])(void(*(*)[5])(void));
    void (*arParamArray[5])(void);

    p = &arArray;
    (*p)[0] = Fun1;
    (*p)[1] = Fun2;
    (*p)[2] = Fun3;

    pPtr = &arParamArray;
    (*pPtr)[0] = ParamFun1;
    (*pPtr)[1] = ParamFun2;
    (*pPtr)[2] = ParamFun3;
    (*pPtr)[3] = ParamFun4;
    (*pPtr)[4] = ParamFun5;

    for(iCounter1 = 0; iCounter1 < 3; iCounter1 ++)
    {
        pRet = (*p)[iCounter1](pPtr);
        printf("Fun%d => %s\n\n", iCounter1 + 1, ((char *)(*pRet)));
    }

    return 0;
}

/*
OUTPUT :

        LAW 1 :         In ParamFun1
        LAW 2 :         In ParamFun2
        LAW 3 :         In ParamFun3
        LAW 4 :         In ParamFun4
        LAW 5 :         In ParamFun5
Fun1 => IMPORTANT LAWS

        NOTE 1 :        In ParamFun1
        NOTE 2 :        In ParamFun2
        NOTE 3 :        In ParamFun3
        NOTE 4 :        In ParamFun4
        NOTE 5 :        In ParamFun5
Fun2 => IMPORTANT NOTES

        POINT 1 :       In ParamFun1
        POINT 2 :       In ParamFun2
        POINT 3 :       In ParamFun3
        POINT 4 :       In ParamFun4
        POINT 5 :       In ParamFun5
Fun3 => IMPORTANT POINTS

*/

void ** Fun1(void(*(*pPtr)[])(void))
{
    int iCounter;
    static char *pszLaw = "IMPORTANT LAWS";

    for(iCounter = 0; iCounter < 5; iCounter ++)
    {
        printf("\tLAW %d :\t\t", iCounter + 1);
        (*pPtr)[iCounter]();
    }

    return (void*)&pszLaw;
}

void ** Fun2(void(*(*pPtr)[])(void))
{
    int iCounter;
    static char *pszLaw = "IMPORTANT NOTES";

    for(iCounter = 0; iCounter < 5; iCounter ++)
    {
        printf("\tNOTE %d :\t", iCounter + 1);
        (*pPtr)[iCounter]();
    }

    return (void*)&pszLaw;
}

void ** Fun3(void(*(*pPtr)[])(void))
{
    int iCounter;
    static char *pszLaw = "IMPORTANT POINTS";

    for(iCounter = 0; iCounter < 5; iCounter ++)
    {
        printf("\tPOINT %d :\t", iCounter + 1);
        (*pPtr)[iCounter]();
    }

    return (void*)&pszLaw;
}

void ParamFun1(void)
{
    printf("In ParamFun1\n");
}

void ParamFun2(void)
{
    printf("In ParamFun2\n");
}

void ParamFun3(void)
{
    printf("In ParamFun3\n");
}

void ParamFun4(void)
{
    printf("In ParamFun4\n");
}

void ParamFun5(void)
{
    printf("In ParamFun5\n");
}
