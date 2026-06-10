//program to print reverse pyramid
#include <stdio.h>

int main() {
    int rows;

    // Get user input for pyramid height
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Loop from total rows down to 1
    for (int i = rows; i >= 1; i--) {
        
        // Loop to print leading spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        
        // Loop to print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
