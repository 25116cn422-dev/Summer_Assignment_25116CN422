//program to  find pair with given sum 
#include <stdio.h>

int main() {
    int n, target_sum;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];

    // Get array elements from user
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Get the target sum to search for
    printf("Enter the target sum: ");
    scanf("%d", &target_sum);

    int pair_found = 0;

    printf("\nPairs with sum %d are:\n", target_sum);

    // Nested loops to check every possible pair
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target_sum) {
                printf("Pair found: (%d, %d)\n", arr[i], arr[j]);
                pair_found = 1; 
            }
            
        }
    }

    // If no pairs matched the condition
    if (!pair_found) {
        printf("No pair found with the given sum.\n");
    }

    return 0;
}
