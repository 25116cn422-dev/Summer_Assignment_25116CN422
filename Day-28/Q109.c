//program to create library management system 
#include <stdio.h>
#include <string.h>

struct Book
{
    int id;
    char title[50];
    char author[50];
    int available;
};

struct Book library[100];
int count = 0;

// Function to add a book
void addBook()
{
    int n;
    printf("How many books do you want to add? ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("Book %d\n",i);
        printf("\nEnter Book ID: ");
        scanf("%d", &library[count].id);
        printf("Enter Book Title: ");
        scanf(" %[^\n]", library[count].title);
        printf("Enter Author Name: ");
        scanf(" %[^\n]", library[count].author);

        library[count].available = 1;
        count++;
    }
    printf("Books Added Successfully!\n");
}

// Function to display all books
void displayBooks()
{
    if (count == 0)
    {
        printf("\nNo books available.\n");
        return;
    }

    printf("\n----- Library Books -----\n");

    for (int i = 0; i < count; i++)
    {
        printf("\nBook %d\n", i + 1);
        printf("ID: %d\n", library[i].id);
        printf("Title: %s\n", library[i].title);
        printf("Author: %s\n", library[i].author);

        if (library[i].available)
            printf("Status: Available\n");
        else
            printf("Status: Issued\n");
    }
}

// Function to search a book
void searchBook()
{
    int id;
    printf("\nEnter Book ID to Search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++)
    {
        if (library[i].id == id)
        {
            printf("\nBook Found!\n");
            printf("Title: %s\n", library[i].title);
            printf("Author: %s\n", library[i].author);

            if (library[i].available)
                printf("Status: Available\n");
            else
                printf("Status: Issued\n");

            return;
        }
    }

    printf("Book Not Found!\n");
}

// Function to issue a book
void issueBook()
{
    int id;
    printf("\nEnter Book ID to Issue: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++)
    {
        if (library[i].id == id)
        {
            if (library[i].available)
            {
                library[i].available = 0;
                printf("Book Issued Successfully!\n");
            }
            else
            {
                printf("Book is already issued.\n");
            }
            return;
        }
    }

    printf("Book Not Found!\n");
}

// Function to return a book
void returnBook()
{
    int id;
    printf("\nEnter Book ID to Return: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++)
    {
        if (library[i].id == id)
        {
            if (!library[i].available)
            {
                library[i].available = 1;
                printf("Book Returned Successfully!\n");
            }
            else
            {
                printf("Book was not issued.\n");
            }
            return;
        }
    }

    printf("Book Not Found!\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n===== Library Management System =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addBook();
                break;

            case 2:
                displayBooks();
                break;

            case 3:
                searchBook();
                break;

            case 4:
                issueBook();
                break;

            case 5:
                returnBook();
                break;

            case 6:
                printf("Thank you!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 6);

    return 0;
}