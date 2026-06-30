//program to create mini library system
#include <stdio.h>
#include <string.h>

#define MAX 100

// Function Declarations
void addBook(int id[], char title[][50], char author[][50], int *count);
void displayBooks(int id[], char title[][50], char author[][50], int count);
void searchBook(int id[], char title[][50], char author[][50], int count);

int main()
{
    int id[MAX], count = 0, choice;
    char title[MAX][50];
    char author[MAX][50];

    do
    {
        printf("\n========== Library Management System ==========\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addBook(id, title, author, &count);
                break;

            case 2:
                displayBooks(id, title, author, count);
                break;

            case 3:
                searchBook(id, title, author, count);
                break;

            case 4:
                printf("Thank you! Exiting...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while(choice != 4);

    return 0;
}

// Function to Add Book
void addBook(int id[], char title[][50], char author[][50], int *count)
{
    if(*count >= MAX)
    {
        printf("Library is full!\n");
        return;
    }

    printf("Enter Book ID: ");
    scanf("%d", &id[*count]);

    printf("Enter Book Title: ");
    scanf(" %49[^\n]", title[*count]);

    printf("Enter Author Name: ");
    scanf(" %49[^\n]", author[*count]);

    (*count)++;

    printf("Book added successfully!\n");
}

// Function to Display Books
void displayBooks(int id[], char title[][50], char author[][50], int count)
{
    int i;

    if(count == 0)
    {
        printf("No books available.\n");
        return;
    }

    printf("\n----------------------------------------------------------\n");
    printf("ID\tTitle\t\t\tAuthor\n");
    printf("----------------------------------------------------------\n");

    for(i = 0; i < count; i++)
    {
        printf("%d\t%-20s\t%-20s\n", id[i], title[i], author[i]);
    }
}

// Function to Search Book by ID
void searchBook(int id[], char title[][50], char author[][50], int count)
{
    int searchId, i, found = 0;

    if(count == 0)
    {
        printf("No books available.\n");
        return;
    }

    printf("Enter Book ID to Search: ");
    scanf("%d", &searchId);

    for(i = 0; i < count; i++)
    {
        if(id[i] == searchId)
        {
            printf("\nBook Found!\n");
            printf("Book ID    : %d\n", id[i]);
            printf("Book Title : %s\n", title[i]);
            printf("Author     : %s\n", author[i]);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Book not found.\n");
    }
}