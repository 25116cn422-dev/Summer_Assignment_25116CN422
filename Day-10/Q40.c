//program to print character pyramid
#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        
        // Print characters counting up starting from 'A'
        for (int k = 1; k <= i; k++) {
            printf("%c", 'A' + k - 1);
        }
        
        // Print characters counting down back to 'A'
        for (int l = i - 1; l >= 1; l--) {
            printf("%c", 'A' + l - 1);
        }
        
        printf("\n");
    }
    return 0;
}
