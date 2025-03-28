#include <stdio.h>
#include <stdlib.h> 
 // For malloc and free
int main(){
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
}
// Function to print array elements
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {  // FIXED LOOP CONDITION
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    
    // Ask user for input
    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid array size\n");
        return 1; // Exit with error
    }

    // Allocate memory dynamically
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Read array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort and print array
    bubbleSort(arr, n);
    printf("Sorted array: ");
    printArray(arr, n);

    // Free allocated memory
    free(arr);
    
    return 0;
}
