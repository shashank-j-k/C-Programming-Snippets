/*
    This program demonstrates the use of if else statement
    
    * In if else, if result of the expression in if is tru then the statement after if gets executed 
    otherwise the statement after else is executed
    * Only one statement written after if and else have the conditional execution effect
    That statement can be simple or compound
    * Only one statement should be present before else and after else which can be simple or compound
*/

#include <stdio.h>

int main(void)
{
    int iNo = 5;
    if(iNo < 10)
        printf("One\n");
    else 
        printf("Two\n");

    // One

    iNo = 15;
    if(iNo < 10)
        printf("One\n");
    else
        printf("Two\n");

    // Two

    /*
    iNo = 5;
    if(iNo < 10)
        printf("One");
        printf("Two\n\n");
    else
        printf("Three\n");   
    */
    // error : 'else' without a previous 'if' else
    
    iNo = 15;
    if(iNo < 10)
    {
        printf("One");
        printf("Two");
    }
    else
        printf("Three\n");

    // Three

    /*
    iNo = 15;
    if(iNo < 10);
    {
        printf("One");
        printf("Two\n\n");
    }
    else
        printf("Three\n");
    */
    // error : 'else' without a previous 'if' else 

    return 0;
}

/*
    * nested if statement

    syntax :

    if(expression1)
        if(expression2)
            statement1;

            OR
    
    if(expression1 && expression2)
        statement1;   
    ---------------------------------------------------------------
    * if else if

    syntax :

    if(expression1)
        statement1;
    else if(expression2)
        statement2;
    else if(expression3)
        statement3;
    else                    // optional
        statement4;
    -----------------------------------------------------------------------------------------------------------------------
    When to use if and when to use if else if?

    When multiple conditions may come true then if statement should be used
    When only one condition out of the given conditions is going to be true then and only then if else if should be used
    If multiple statements are used instead of else if then time complexity will be increased

    -----------------------------------------------------------------------------------------------------------------------
    * Nested if else

    syntax :

    if(expression1)
    {
        if(expression2)
            statement1;
        else
            statement2;
    }
    else
    {
        if(expression3)
            statement3;
        else
            statement4;
    }
    -------------------------------------------------------------------
    Dangling else problem

    if(expression1)  ...(1)
    if(expression2)  ...(2)
    statement1;
    else
    statement2;

    * Here problem arises which if will match with the else statement?

    > Solution by compiler : else matched to (2) if
    if(expression1)  
    {
        if(expression2)  
        statement1;
        else
        statement2;
    }

    > Solution by programmer : else matched to (1) if
    if(expression1) 
    {
        if(expression2) 
        statement1;
    }
    else
        statement2;

*/