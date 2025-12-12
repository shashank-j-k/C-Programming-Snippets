#include <stdio.h>

int main(void)
{
    // char chChar''';                                  //  error: empty character constant
    char chChar1 = '\'';
    char chChar2 = '"';
    char chChar3 = '\"';
    char chChar4 = '?';

    printf("%c\n", chChar1);                            // '   
    printf("%c\n", chChar2);                            // "
    printf("%c\n", chChar3);                            // "
    printf("%c\n", chChar4);                            // ?    

    printf("Hello\n");                                  // Hello
    // printf(""Hello"\n");                             // error: expected ')' before 'Hello'
    printf("\"Hello\"\n");                              // "Hello"
    printf("Hello?\n");                                 // Hello?
    printf("Hello\?\n");                                // Hello?

    printf("\temp\bin\new\n");                          //      emin
                                                        //  ew
    printf("\\temp\\bin\\new\n");                       // \temp\bin\new

    printf("This is a test for format specifier \\a \a\n");                  // This is a test for format specifier \a
    printf("This is a test for format specifier \\c \b\bb\n");               // This is a test for format specifier \b
    printf("This is a test for format specifier \\r \r\t ----\"----\n");     // This is  ----"---- format specifier \r
    printf("See you on next page using \\f\fHello Again\r\n");               // See you on next page♀Hello Again
    printf("\ta test for format specifier \\t\rThis is \t\n");               // This is a test for format specifier \t    
    printf("\vThis is a test for format specifier \\v \vHello\a");           //♂This is a test for format specifier \v ♂Hello

    return 0;
}


/*
*   LIST OF ALL ESCAPE SEQUENCES

*   \a  produces beep sound to alert user
*   \b  produces backspace effect in output by moving caret back by one step
*   \f  form feed, outs caret on beginning of next page
*   \n  newlinw, moves caret to new line
*   \0  string terminating character
*   \r  brings caret to beginning of the same line
*   \t  horizontal tab
*   \v  vertical tab
*   \'  prints '
*   \"  prints "
*   \\  prints \
*   \?  prints ?
*/