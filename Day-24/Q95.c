//program to find longest word
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], longest[100];
    int i = 0, len = 0, maxLen = 0, start = 0;

    printf("Enter a sentence: ");
    scanf("%[^\n]",str);

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            len++;
        } else {
            if (len > maxLen) {
                maxLen = len;
                strncpy(longest, &str[start], len);
                longest[len] = '\0';
            }
            len = 0;
            start = i + 1;
        }
        i++;
    }

    printf("Longest word: %s\n", longest);

    return 0;
}