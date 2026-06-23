//program to count words in a sentence 
#include <stdio.h>

int main() {
    char str[200];
    int i, count = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if ((i == 0 && str[i] != ' ' && str[i] != '\n') ||
            (i > 0 && str[i] != ' ' && str[i - 1] == ' ')) {
            count++;
        }
    }

    printf("Number of words = %d\n", count);

    return 0;
}