# Documentation for 6 number question


# Explanation of how the Data Structures Are Defined

The data structure of this program is mainly one dimensional integer arrays which will be used to hold input data, as well as the heaps.

* Array HeapRepresentation (arr[100] and arr copy[100]):
    
. They are the arrays of integer values of fixed size (maximum 100 elements; the size is implicitly defined by the array size in    main() ). The array arr keeps the unsorted integers provided by user and is subsequently converted to a max-heap. We start with an array copy arr_copy in order to maintain the original unsorted data so that the two heap builds are independent of each other.
    
. The array holds a complete binary tree in level-order: There is an index i (starting at 0), the left child of this node is at position 2i + 1, the right child at position 2i + 2 and the parent is at (i-1)/2 (as an integer). Such implicit tree representation makes heap operations possible without explicit pointers, which is very efficient.

. No other data structures such as linked list or queue, are utilized, since heaps can be built only through array manipulations and thus injuries a heap around O(n) on time complexity of the heap building operation.

The reason why this representation scheme of array-based is appealing is its space economy (no pointer overhead) and the ease of enforcing the heap properties. 



# Description of the Functions Implemented with their purpose

To build, maintain, and perform utility computations on the heap the program uses a few modular functions. The functions are expected to be reusable, specialized in a particular task, in order to enhance the clarity and maintainability of the code.

1. swap:
   
   Purpose: A utility function that interchange the values of two integer elements which are at a and b. It takes advantage of such a temporary variable to carry out the swap atomically.

   This is necessary in order to rearrange the elements in the process of heapify without losing information.

2. maxHeapify:
   
   Purpose: Preserves the max-heap property on the subtree rooted at index i in an array arr having size n. It can compare the node to its left and right child, finds the largest out of them, and swap therefore making sure that the parent is bigger than or equal to its children. When a swap takes place it recursively calls itself on the subtree it affects so as to trickle down the heap property.

   This is an essential operation used in constructing and updating max-heaps so that the heap invariant (parent >= children) is satisfied.

3. buildMaxHeap:

Purpose: Builds a max-heap out of an unsorted array arr of n entries. It begins with the parent of the last-but-one node (index n/2 -1), and now updates the parent max heapify node by node towards the root. In this bottom-up implementation, the heap is constructed in O(n) time as opposed to O(nlogn).

The algorithm converts the input array in a correct max-heap such that the largest element is the root of the max-heap.

4. minHeapify:

Purpose: As maxHeapify except it ensures the efficiency property of min-heap on the subtree rooted at index i. It finds the smallest of the node and its children, swaps unless the node is the root of the tree and calls itself with the affected subtree, so the heap ordering (parent <= children) is true everywhere in the tree.

This is applied to construction and maintenance of min-heaps.

5. buildMinHeap:

Purpose: Creates a min-heap out of an unsorted array arr of length n by using minHeapify on each non-leaf node (and only then) beginning with bottom-most node (i.e., index n/2 - 1 down to index 0). It also takes O(n) time like buildMaxHeap.

It restructures a min-heap in order that the root is the least element in the array.

6. printArray:

Purpose: Print to the standard output one line containing elements of the array arr of size n, separated by spaces, and a terminating newline. It is referred to as the utility function and is utilized to show the resultant piles to verify them.

They do not have returns on values of the functions, but only of their side effects upon the array or output, focusing on procedures.



# Overview of How the main() Method Is Organized

1. User Input Collection:

 . Asks the user whether the number of elements (n) and reads the latter with scanf.

 . Next, read prompts of n integer, it would store them in an array called arr using a loop through scanf. Notice:The code expects valid inputs; some additional validation checks can be added in a real production version.

2. Array Copying:
   
 . Makes a second array arr_copy copying array elements arr in a loop. This proves to be necessary so that the creation of one heap does not interfere with information on the other heap.

3. Heap Construction and Display:
   
 . Calls replaceMaxHeap(arr, n) in order to create a max-heap of arr.
 
 . Prints Max-Heap: and then the contents of arr separated by printArray.
 
 . Calls calls MinHeap(arr_copy, n) to make arr_copy a min-heap.
 
 . Prints Min-Heap: and then calls printArray on arr_copy.


4. Termination:
   
 . Returns 0 to indicate successful execution.


# Sample Output of a Complete Run of the Program 

Enter the number:6

Enter 6 numbers: 2 4 6 2 8 9

Max-Heap: 9 8 6 2 4 2 

Min-Heap: 2 2 6 4 8 9


   





