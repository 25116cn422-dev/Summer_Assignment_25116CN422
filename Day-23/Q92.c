//program to find maximum occuring character
#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int i;
    char maxChar;
    int max = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    // Count frequency
    for (i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Find maximum occurring character
    for (i = 0; i < 256; i++) {
        if (freq[i] > max) {
            max = freq[i];
            maxChar = (char)i;
        }
    }

    printf("Maximum occurring character: %c\n", maxChar);
    printf("Frequency: %d\n", max);

    return 0;
}