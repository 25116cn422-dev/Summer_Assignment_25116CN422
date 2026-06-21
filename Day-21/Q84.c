//program to count lowercase and uppercase
#include <stdio.h>

int main() {
    char str[100];
    int i, uppercase = 0, lowercase = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            uppercase++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z') {
            lowercase++;
        }
    }

    printf("Uppercase letters = %d\n", uppercase);
    printf("Lowercase letters = %d\n", lowercase);

    return 0;
}