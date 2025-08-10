# Documentation for 2 number question


# Explanation of how the Data Structures Are Defined

Two stacks are based on arrays, used in the program:

   1. Character Stack: A unvarying character stature container (stack[MAX] with MAX = 100) go into which to push the operators and parens during the shifting between infix and postfix forms. There is an integer, initialized to -1, to represent the top element with a variable top.

   2. Number Stack: Array of modest size doubles (stack[MAX] where MAX = 100) which holds operand during evaluation of postfix. There is an integer, initialized to -1, to represent the top element with a variable top.


# Description of the Functions Implemented with their purpose

1. precedence:
   
   Purpose: Determines the precedence level of an operator.

2. isOperator:
   
   Purpose: Checks if a character is an operator.

3. infixToPostfix:
   
   Purpose: Converts an infix expression to postfix notation.

4. evalPostfix:
   
   Purpose: Tests postfix expression to find out its numerical answer.


# Overview of How the main() Method Is Organized

The main() function

1. Defines one example of an infix expression test: "3 + 4 * 2".

2. Introduces a postfix array in which to store the converted expression.

3. Makes infixToPostfix calls to transform the infix into postfix expression.

4. Makes calls to evalPostfix to interpret postfix expression.

5. Prints the infix expression, postfix expression and the result of its evaluation (precision to two decimal places).

    Returns 0 to indicate successful execution.



# Sample Output of a Complete Run of the Program

   Infix: 3 + 4 * 2
   
   Postfix: 3 4 2 * +
   
   Result: 11.00









