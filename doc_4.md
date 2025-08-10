Documentation for 4 number question


# Explanation of how the Data Structures Are Defined

The program uses a doubly linked list with a Node struct:

. data: Integer value of the node.

. prev: Pointer to the previous node.

    next: Pointer to the next node.


# Description of the Functions Implemented with their purpose

1. insertAfter:
   
Purpose: Inserts a node with data after node p.

2. deleteNode:

purpose: Deletes node d from the list.

3. printList:
   
Purpose: Prints node data in the list.


# Overview of How the main() Method Is Organized
    
The main() function:

. Creates a list with one node (5).

. Prints the initial list.

. Inserts 10 after 5, prints the list.

. Inserts 40 after 10, prints the list.

. Deletes node 10, prints the list.

. Release all nodes, returns 0.

 
(d) Sample Output of a Complete Run of the Program 
    
    Initial original: 5
    Insert 10 after 5: 5 10
    Insert 40 after 10: 5 10 40
    Delete 10: 5 40

    




