//program to print hollow square pattern
#include <stdio.h>

int main() {
    int side;
    printf("Enter the side length of the square: ");
    scanf("%d", &side);

    // Loop through each row
    for (int i = 1; i <= side; i++) {
        // Loop through each column
        for (int j = 1; j <= side; j++) {
            // Print star only for borders
            if (i == 1 || i == side || j == 1 || j == side) {
                printf("* ");
            } else {
                printf("  "); // Print space for the hollow part
            }
        }
        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}
