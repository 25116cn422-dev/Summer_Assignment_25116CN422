//program to find missing numbers in array
#include <stdio.h>

int main() {
    int size;

    //Get the size of the array from the user
    printf("Enter the number of elements you want to input: ");
    scanf("%d", &size);

    int arr[size];

    // input the array elements
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Ask for the expected maximum range (N)
    int N;
    printf("Enter the maximum expected number (N) in the sequence: ");
    scanf("%d", &N);

    // Create and initialize the Checklist array to mark all  elements as not present
    int checklist[N + 1];
    for (int i = 0; i <= N; i++) {
        checklist[i] = 0;
    }

    // mark present numbers
    for (int i = 0; i < size; i++) {
        int currentNumber = arr[i];
        if (currentNumber >= 1 && currentNumber <= N) {
            checklist[currentNumber] = 1; 
        }
    }

    // Print the missing numbers
    printf("\nThe missing numbers between 1 and %d are: ", N);
    int foundMissing = 0;
    for (int i = 1; i <= N; i++) {
        if (checklist[i] == 0) {
            printf("%d ", i);
            foundMissing = 1;
        }
    }

    if (!foundMissing) {
        printf("None! All numbers are present.");
    }
    printf("\n");

    return 0;
}
