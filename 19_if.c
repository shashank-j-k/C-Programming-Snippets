 /*
    This program demonstrates the use of if statement:

    * The statement immidiate next to if statement is the conditionally executed statement.
    * When the if statement comes true only then the immidiate next statement is executed
    The next statement can be simple or compound
    * If the condition in if is fales then the next statement is skipped
    */
 
 #include <stdio.h>

int main(void)
{
    int iNo = 5;
    if(iNo < 10)
        printf("One");              // simple statement
        printf("Two\n");            // not included in if

    // OneTwo

    iNo = 15;
    if(iNo < 10)
        printf("One");              // simple statement
        printf("Two\n");            // not included in if

    // Two

    iNo = 5;
    if(iNo < 10)                    // true
    {
        printf("One");              // compound statement
        printf("Two\n\n");          // included in if
    }
    // OneTwo

    iNo = 15;                                                          
    if(iNo < 10)                    // false
    {       
        printf("One");              // compound statement
        printf("Two");              // included in if
    }
    // No Output

    iNo = 15;           
    if(iNo < 10);                   // if terminated with a NULL statement
    {                               // not included in if                                                                                                                                                                      
        printf("One");
        printf("Two\n\n");
    }
    // OneTwo

    return 0;
}


/*

    TYPES OF STATEMENTS
    
*   Based on type of action they perform :

    EXECUATBLE STATEMENTS: - statements written for the purpose of execution at runtime
                           - stored in text section of assembly
                           - cannot be written in global as execution control cannot reach there (all functions will be called by main)
                           - e.g. printf("Hello world\n");
    NON-EXECUATBLE STATEMENTS: - written for the compiler
                               - not included in asssembly
                               - does not reach the processor
                               - can be written locally as well as globally
                               - e.g. int iNo;  int iNo = 10;

                            
*   Based on number of constituent statements:

    SIMPLE STATEMENTS:    - Statements existing independently
                          - e.g iAns = 10 + 20;
                                printf("%d", iAns);
    COMPOUND STATEMENTS   - statements written together in a group inside a block
                          - e.g. {
                                    iAns = 10 + 20;
                                    printf("%d", iAns);
                                 }


*   Based on their role:

    *DEFINITION OR DECLARATION STATEMENTS: -
        DECLARATION STATEMENTS:  - written for compiler only as an identification of the variables to be used along with their datatype
                                 - Does not allocate memory
                                 + Variable declaration : telling compiler (i) the name 
                                                                           (ii) the datatype of the variable
                                    - e.g. extern int iNo;
                                 + Function declaration : telling compiler (i) the name of function
                                                                           (ii) the return type of the function
                                                                           (iii) number of parameters
                                                                           (iv) type of parameters
                                    - e.g. int Addition(int, int);
        DEFINITION STATEMENTS:   - written for linker so that it can link the name with the address of the memory
                                 - memory is allocated
                                 + Variable Definition - e.g. int iNo;
                                 + Function Definition - e.g. int Addition(int iNo1, int ino2)
                                                              {
                                                                return iNo1 + iNo2;
                                                              }

    *EXPRESSION OR NULL STATEMENTS: -
        EXPRESSION STATEMENTS:   - These statements have some expression
                                 - e.g. iAns = 10 + 20;
                                
        NULL STATEMENTS:         - These statements do not have any expression
                                 - Logic of the program does not it but syntax needs it
                                 - Empty compound statements are also NULL statements
                                 - uses : (i) In if else statements if condition does not need any statements
                                          (ii) In while loop for traversal without operation

    *LABELLED STATEMENTS:       (suffixed with ':')
        IDENTIFIER LABELLED STATEMENTS: - used with goto statements 

        CASE LABELLED STATEMENTS:       - used with switch statement

        DEFAULT LABELLED STATEMENTS:    - used with switch statement


    *FLOW CONTROLLED STATEMENTS:
        BRANCHING STATEMENTS:- 
            > CONDITIONAL BRANCHING STATEMENTS: 
                - if
                - if else
                - switch
            > UNCONDITIONAL BRANCHING STATEMENTS
                - goto
                - return
                - break
                - continue

        ITERATION STATEMENTS:-
            - for
            - while
            - do while


                                
*/  