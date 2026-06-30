//program to create menu-driven string operation system 
#include <stdio.h>
#include <string.h>

// Function Declarations
void stringLength(char str[]);
void copyString(char str[]);
void concatenateString(char str[]);
void compareStrings(char str[]);
void reverseString(char str[]);

int main()
{
    char str[100];
    int choice;

    printf("Enter a String: ");
    scanf(" %[^\n]", str);

    do
    {
        printf("\n====== String Operation System ======\n");
        printf("1. Find Length\n");
        printf("2. Copy String\n");
        printf("3. Concatenate String\n");
        printf("4. Compare Strings\n");
        printf("5. Reverse String\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                stringLength(str);
                break;

            case 2:
                copyString(str);
                break;

            case 3:
                concatenateString(str);
                break;

            case 4:
                compareStrings(str);
                break;

            case 5:
                reverseString(str);
                break;

            case 6:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}

// Find Length
void stringLength(char str[])
{
    printf("Length of String = %lu\n", strlen(str));
}

// Copy String
void copyString(char str[])
{
    char copy[100];
    strcpy(copy, str);

    printf("Copied String: %s\n", copy);
}

// Concatenate String
void concatenateString(char str[])
{
    char str2[100], result[200];

    printf("Enter another string: ");
    scanf(" %[^\n]", str2);

    strcpy(result, str);
    strcat(result, str2);

    printf("Concatenated String: %s\n", result);
}

// Compare Strings
void compareStrings(char str[])
{
    char str2[100];

    printf("Enter another string: ");
    scanf(" %[^\n]", str2);

    if(strcmp(str, str2) == 0)
        printf("Both strings are Equal.\n");
    else
        printf("Both strings are Not Equal.\n");
}

// Reverse String
void reverseString(char str[])
{
    int i, len;
    char rev[100];

    len = strlen(str);

    for(i = 0; i < len; i++)
    {
        rev[i] = str[len - i - 1];
    }

    rev[len] = '\0';

    printf("Reversed String: %s\n", rev);
}