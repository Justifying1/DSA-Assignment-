#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a, int *b) {

    int temp = *a;
    *a = *b;
    *b = temp;
}


int comparisons = 0, swaps = 0;


void bubbleSort(int arr[], int n) {

    for (int i = 0; i < n - 1; i++) {

        for (int j = 0; j < n - i - 1; j++) {
            comparisons++;

            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                swaps++;
            }
        }
    }
}


void selectionSort(int arr[], int n) {

    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;

        for (int j = i + 1; j < n; j++) {
            comparisons++;

            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            swap(&arr[min_idx], &arr[i]);
            swaps++;
        }
    }
}


void insertionSort(int arr[], int n) {

    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0) {
            comparisons++;

            if (arr[j] > key) {
                arr[j + 1] = arr[j];
                swaps++;
                j--;

            } else {

                break;
            }
        }
        arr[j + 1] = key;
    }
}


void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];

    for (int i = 0; i < n1; i++) L[i] = arr[l + i];

    for (int i = 0; i < n2; i++) R[i] = arr[m + 1 + i];

    int i = 0, j = 0, k = l;

    while (i < n1 && j < n2) {
        comparisons++;

        if (L[i] <= R[j]) {
            arr[k++] = L[i++];

        } else {
            arr[k++] = R[j++];
            swaps++;
        }
    }
    while (i < n1) arr[k++] = L[i++];

    while (j < n2) arr[k++] = R[j++];
}

void mergeSort(int arr[], int l, int r) {

    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

void printArray(int arr[], int n) {

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, choice;
    srand(time(0)); 

 
    printf("Enter the number of elements (N): ");
    scanf("%d", &n);

   
    int arr[n];

    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 1000 + 1; 
    }

    
    printf("Unsorted array: ");
    printArray(arr, n);

    
    printf("Choose a sorting algorithm:\n");
    printf("1. Bubble Sort\n2. Selection Sort\n3. Insertion Sort\n4. Merge Sort\n");
    printf("Enter choice (1-4): ");
    scanf("%d", &choice);

  
    comparisons = 0;
    swaps = 0;

    
    switch (choice) {

        case 1:
            bubbleSort(arr, n);
            printf("Sorted array (Bubble Sort): ");
            break;

        case 2:
            selectionSort(arr, n);
            printf("Sorted array (Selection Sort): ");
            break;

        case 3:
            insertionSort(arr, n);
            printf("Sorted array (Insertion Sort): ");
            break;

        case 4:
            mergeSort(arr, 0, n - 1);
            printf("Sorted array (Merge Sort): ");
            break;

        default:
            printf("Invalid choice!\n");
            return 1;
    }

    printArray(arr, n);

 
    printf("Total comparisons: %d\n", comparisons);
    
    printf("Total swaps: %d\n", swaps);

    return 0;
}