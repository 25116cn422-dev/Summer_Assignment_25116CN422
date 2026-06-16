//program to find maximum frequency element
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    int freq[n];
    int visited[n]; // To avoid counting the same element twice

    // Get array elements from user
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        visited[i] = 0; // Initialize visited tracking to 0 
    }

    // Calculate frequencies of each unique element
    for (int i = 0; i < n; i++) {
        if (visited[i] == 1) {
            continue; // Skip if this element was already counted
        }

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1; // Mark duplicate elements as visited
            }
        }
        freq[i] = count; // Store frequency at the first occurrence index
    }

    //Find the maximum frequency
    int max_freq = 0;
    for (int i = 0; i < n; i++) {
        if (visited[i] == 0 && freq[i] > max_freq) {
            max_freq = freq[i];
        }
    }

    //Count how many elements share this max frequency
    printf("\nHighest frequency is: %d\n", max_freq);
    int same =0;
    for (int i = 0; i < n; i++) {
        
        if (visited[i] == 0 && freq[i] == max_freq) {
            same++;
            printf("%d ",arr[i]);
        }
        
        
    }
    if(same>0) printf("\nabove elements have same frequency");
    return 0;
}

