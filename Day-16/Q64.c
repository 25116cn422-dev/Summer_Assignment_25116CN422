//program to remove duplicates from array
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];

    // Get array elements from user
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Remove duplicates
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            
            // If a duplicate is found
            if (arr[i] == arr[j]) {
                
                // Shift all subsequent elements one position to the left
                for (int k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                // Decrease array size since an element was removed
                n--;
                // Decrement j so we don't skip the element that just shifted into index j
                j--; 
            }
        }
    }

    // Output the unique array
    printf("\nArray after removing duplicates:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nTotal unique elements remaining: %d\n", n);

    return 0;
}
