#include <stdio.h>

int main(void)
{
    int iNo = 10;
    int *p = &iNo;
    int **q = &p;
    int ***r = &q;
    int ****s = &r;
    int *****x = &s;
    int ******y = &x;
    int *******z = &y;

    printf("&iNo\t = \t%d\n", &iNo);        // 6422300
    printf("&p \t = \t%d\n", &p);           // 6422296
    printf("&q \t = \t%d\n", &q);           // 6422292
    printf("&r \t = \t%d\n", &r);           // 6422288
    printf("&s \t = \t%d\n", &s);           // 6422284
    printf("&x \t = \t%d\n", &x);           // 6422280
    printf("&y \t = \t%d\n", &y);           // 6422276
    printf("&z \t = \t%d\n\n", &z);         // 6422272

    printf("*p \t = \t%d\n", *p);           // 10
    printf("*q \t = \t%d\n", *q);           // 6422300
    printf("**q \t = \t%d\n", **q);         // 10
    printf("***z     = \t%d\n", ***z);      // 6422288
    printf("****s    = \t%d\n", ****s);     // 10
    // printf("******x  = \t%d", ******x);  // error: invalid type argument of unary '*' (have 'int')
    printf("******z  = \t%d\n\n", ******z); // 6422300

    printf("&(****s) = \t%d\n", &(****s));  // 6422300
    printf("&(****z) = \t%d\n", &(****z));  // 6422288 
    printf("&(**q)   = \t%d\n", &(**q));    // 6422300
    printf("*(&(**q))= \t%d\n\n", *(&(**q)));   // 10

    printf("&(*p)    = \t%d\n", &(*p));     // 6422300
    printf("*(&(*p)) = \t%d\n", *(&(*p)));  // 10
    printf("&iNo     = \t%d\n", &iNo);      // 6422300
    printf("*(&iNo)  = \t%d\n\n", *(&iNo)); // 10

    return 0;
}

/*
OUTPUT :

&iNo     =      6422300
&p       =      6422296
&q       =      6422292
&r       =      6422288
&s       =      6422284
&x       =      6422280
&y       =      6422276
&z       =      6422272

*p       =      10
*q       =      6422300
**q      =      10
***z     =      6422288
****s    =      10
******z  =      6422300

&(****s) =      6422300
&(****z) =      6422288
&(**q)   =      6422300
*(&(**q))=      10

&(*p)    =      6422300
*(&(*p)) =      10
&iNo     =      6422300
*(&iNo)  =      10
*/