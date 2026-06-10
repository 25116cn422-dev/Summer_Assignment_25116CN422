//program to print star pyramid
#include <stdio.h>

int main() {
    int rows;

    // Get user input for pyramid height
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Loop through each row
    for (int i = 1; i <= rows; i++) {
        
        // Loop to print leading spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        
        // Loop to print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        
        // Move to the next line
        printf("\n");
    }

    return 0;
}
