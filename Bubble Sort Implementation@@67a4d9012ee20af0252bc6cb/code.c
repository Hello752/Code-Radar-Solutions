#include <stdio.h>
#include <stdlib.h>  // For malloc and free

// Function to perform Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to print array elements
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {  // FIXED LOOP CONDITION
        printf("%d ", arr[i]);
    }
    printf("\n");
}

