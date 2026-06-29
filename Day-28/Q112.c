//program to create contact management system
#include <stdio.h>
#include <string.h>

struct Contact
{
    char name[50];
    char phone[15];
};

struct Contact contacts[100];
int count = 0;

// Add a new contact
void addContact()
{
    printf("\nEnter Name: ");
    scanf(" %[^\n]", contacts[count].name);

    printf("Enter Phone Number: ");
    scanf("%s", contacts[count].phone);

    count++;

    printf("Contact Added Successfully!\n");
}

// Display all contacts
void displayContacts()
{
    if (count == 0)
    {
        printf("\nNo contacts found.\n");
        return;
    }

    printf("\n----- Contact List -----\n");

    for (int i = 0; i < count; i++)
    {
        printf("\nContact %d\n", i + 1);
        printf("Name : %s\n", contacts[i].name);
        printf("Phone: %s\n", contacts[i].phone);
    }
}

// Search a contact by name
void searchContact()
{
    char searchName[50];

    printf("\nEnter Name to Search: ");
    scanf(" %[^\n]", searchName);

    for (int i = 0; i < count; i++)
    {
        if (strcmp(contacts[i].name, searchName) == 0)
        {
            printf("\nContact Found!\n");
            printf("Name : %s\n", contacts[i].name);
            printf("Phone: %s\n", contacts[i].phone);
            return;
        }
    }

    printf("Contact Not Found!\n");
}

// Delete a contact
void deleteContact()
{
    char deleteName[50];

    printf("\nEnter Name to Delete: ");
    scanf(" %[^\n]", deleteName);

    for (int i = 0; i < count; i++)
    {
        if (strcmp(contacts[i].name, deleteName) == 0)
        {
            for (int j = i; j < count - 1; j++)
            {
                contacts[j] = contacts[j + 1];
            }

            count--;
            printf("Contact Deleted Successfully!\n");
            return;
        }
    }

    printf("Contact Not Found!\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n===== Contact Management System =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addContact();
                break;

            case 2:
                displayContacts();
                break;

            case 3:
                searchContact();
                break;

            case 4:
                deleteContact();
                break;

            case 5:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 5);

    return 0;
}