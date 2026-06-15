//program to reverse array
#include <stdio.h>

// Function to reverse the array
void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    int temp;

    while (start < end) {
        // Swap elements using a temporary variable
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move the pointers toward the center
        start++;
        end--;
    }
}

// Helper function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i<n; i++) {
        printf("enter arr[%d]:",i);
        scanf("%d",&arr[i]);
    }

    printf("Original array: ");
    printArray(arr,n);

    reverseArray(arr,n);

    printf("Reversed array: ");
    printArray(arr,n);

    return 0;
}

