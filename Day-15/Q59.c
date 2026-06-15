//program to rotate array right
#include <stdio.h>

int main() {
    int n, d;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n], temp[n];

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to rotate right: ");
    scanf("%d", &d);

    d = d % n;

    // Right rotation
    for(int i = 0; i < n; i++) {
        temp[(i + d) % n] = arr[i];
    }

    printf("Array after right rotation:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }

    return 0;
}
