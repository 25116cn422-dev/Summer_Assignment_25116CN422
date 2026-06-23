//program to check anagram strings
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int freq[256] = {0};
    int i, flag = 1;

    printf("Enter first string: ");
    scanf("%[^\n]", str1);

    printf("Enter second string: ");
    scanf("%[^\n]", str2);

    for (i = 0; str1[i] != '\0'; i++)
        freq[(unsigned char)str1[i]]++;

    for (i = 0; str2[i] != '\0'; i++)
        freq[(unsigned char)str2[i]]--;

    for (i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Strings are anagrams.\n");
    else
        printf("Strings are not anagrams.\n");

    return 0;
}