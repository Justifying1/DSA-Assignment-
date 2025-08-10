# Documentation for 3 number question


# Explanation of how the Data Structures Are Defined

A singly linked list has been utilized as our data structure in this program.

We suppose it by means of the struct Node:

. Data: it holds the integer value of every node.

. Next: A pointer to the address of the next node in linked list.

The struct Node enable us to construct several nodes and all the nodes are connected to form a linked list.
    

# Description of the Functions Implemented with their purpose

1. createNode:

     Purpose: It makes a new node with the supplied data and gives the address to return.

  2. insertAtEnd:
   
     Purpose: Adds new element as the last of the list.


  3. void displayForward:

     Purpose: Show the whole list of the nodes at the beginning (head) to the end of the list.


  4. reverseTraversal

     Purpose: Shows contents of the linked list in backward manner.


# Overview of How the main() Method Is Organized

Program is illustrated by the main () function:

   1. Init an empty list by putting head = NULL.

   2. Add items to the linked list with insertAtEnd():

   3. Values entered: 11, 21, 36, 48, 50.

   4. Output the list in forward format with use of displayForward().

   5. Reversely show the list with reverseTraversal().

      Exit the program with 0.


# Sample Output of a Complete Run of the Program

   Forward: 11 21 36 48 50
   
   Reverse: 50 48 36 21 11








