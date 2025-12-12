/* Whenever we use array as a formal parameter for a function it is a pointer (check Fun1)*/

#include <stdio.h>
#include <string.h>

void Fun1(char []);
void Fun2(char *);

int main(void)
{
    Fun1("Bye");
    Fun2("Bye");

    return 0;
}

void Fun1(char szStr[])                 // here szStr[] is a pointer
{
    // szStr[2] = 'Z';                  // expected to be allowed but crashes program on Visual Studio Code
    puts(szStr);                        // Bye (expected to crash the program but allowed)

    szStr = "Hello";
    puts(szStr);                        // Hello
}

void Fun2(char *pszStr)
{
    // pszStr[2] = 'Z';                 // crashes program on Visual Studio Code
    puts(pszStr);                       // Bye

    pszStr = "Hello";
    puts(pszStr);                       // Hello
}

/*OUTPUT : (does not crash on Visual Studio Command Prompt)

Bye
Hello
Bye
Hello
*/