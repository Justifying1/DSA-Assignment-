Documentation for 1 number question

(a) Explanation of how the Data Structures Are Defined

The program follows a stack data structure to keep count of opening brackets in formula.
A data structure called stack is declared as the struct Stack with :
    
   . items: an array of characters in fixed size of maximum size MAX = 100 to hold opening brackets ( (, [, {).
   
   . top: An int that keeps the number of the top of the stack. It is set to -1 to signify empty stack.

(b) Description of the Functions Implemented with their purpose

1. initStack :

   puropse: Initializes the stack by loading top index to -1 which means that the stack is empty.

2. isEmpty :

   purpose: Checks if the stack is empty.

3. push :

   purpose: Adds an opening bracket to the top of the stack.

4. pop :
   
   purpose: Removes and returns the top bracket from the stack.

5. isBalanced :

   purpose: Decides whether brackets of the input expression are balanced.

(c) Overview of How the main() Method Is Organized

Function main is designed in such a way that it checks the isBalanced function on three mathematical expressions that are predetermined.

It contains a definition of an array of three constant strings:

⇒a + (b − c) ∗ (d

⇒m + [a − b ∗ (c + d ∗ {m)]

⇒a + (b − c)

It applies a loop to go through each expression and call isBalanced to call out whether the brackets are balanced.

It prints each expression followed by an output that indicates whether it is or is not balanced ("Balanced" or "Not Balanced").

This Returns 0 to signify that it has succeeded.

(d) Sample Output of a Complete Run of the Program

Expression: a + (b - c) * (d

Not Balanced

Expression: m + [a - b * (c + d * {m)]

Not Balanced

Expression: a + (b - c)

Balanced


















