# Documentation for 8 number question

## Explanation of how the Data Structures Are Defined

Data structures used in the program are as follows:
1. Array of Integers (arr[]): This is a Dynamically-sized array of integers whose size is set through an input obtained by the user n. It is an array holding the random numbers to be sorted.

2. Global Variables:
- comparisons: An integer keeping the count of comparisons that occur during sorting.
- swaps: An integer that keeps a count of the amount of swaps that have been done on sorting.

3. Temporary Arrays in Merge Sort:
L[] and R[]: Are temporary arrays that are utilized in the merge function to have the left and right subarrays other than the process of merging. The lengths of subarrays control their sizes (n1 and n2).

## Description of the Functions Implemented with their purpose

1. swap (int *a, int *b)
Exchanges the values of two integers by way of a temporary variable.

2. bubbleSort(int arr[ ] , int n)
Gives a comparison of adjacent things and exchanges them when they are out of order and Repeats till the array has been sorted.

3. selectionSort(int arr [ ], int n)
finding the smallest value among the unordered list of the array and swaps it with the first unordered one.

4. insertionSort(int arr[], int n)
The sorted array is build by putting the elements in their respective positions from left to right and shifting the greater elements to the right.

5. mergeSort(int arr[], int l, int r)
Recursively divides the array into half, and continues to half until they are individual elements, wherein they are sorted and merged using the merge() function.

6. merge(int arr[],int l,int m,int r)
Merges two sorted arrays of elements into a single sorted array and counts  the total comparisons and swaps performend.

7. printArray (int arr [], int n)
shows all the elements of the array and in one line.

## Overview of How the main() Method Is Organized

It is the main() function that coordinates the running of a program in the following way:

1. Initialization:
Apply random the number generator srand(time(0)) to be sure of different random numbers on each run.
Asks the user to give the value of elements (n).

2. Array Creation:
Defines an array arr that is of length n.
fills it up with random numbers between 1 and 1000 with rand().

3. Array Unsorted:
Makes a call to printArray to print the unordered array.

4. User Input sorting algorithm:
The users is asked to select any of the given algorithm for sorting as per their choice (1-4, Bubble, Selection, Insertion or Merge Sort).

5. Sorting Execution:
Clears the comparison and swap to 0.
Calls the algorithm choosen hy user (bubbleSort, selectionSort, insertionSort or mergeSort) using a switch statement.
while entering an invalid selection, a message of error and quitting occurs.

6. Output Results:
Calls printArray to print the sorted array.
Finally Prints the number of comparisons and swaps made during the sorting of the data.

## Sample Output of a Complete Run of the Program

Enter the number of elements (N): 8

Unsorted array: 800 859 805 790 940 905 284 386

Choose a sorting algorithm:

1. Bubble Sort
2. Selection Sort
3. Insertion Sort
4. Merge Sort
Enter choice (1-4): 2
Sorted array (Selection Sort): 284 386 790 800 805 859 905 940
Total comparisons: 28

Total swaps: 7
