//program to create inventory management system
#include <stdio.h>
#include <string.h>

#define MAX 100

// Function Declarations
void addProduct(int id[], char name[][30], int quantity[], float price[], int *count);
void displayProducts(int id[], char name[][30], int quantity[], float price[], int count);
void searchProduct(int id[], char name[][30], int quantity[], float price[], int count);
void updateQuantity(int id[], int quantity[], int count);

int main()
{
    int id[MAX], quantity[MAX], count = 0, choice;
    char name[MAX][30];
    float price[MAX];

    do
    {
        printf("\n====== Inventory Management System ======\n");
        printf("1. Add Product\n");
        printf("2. Display Products\n");
        printf("3. Search Product\n");
        printf("4. Update Quantity\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addProduct(id, name, quantity, price, &count);
                break;

            case 2:
                displayProducts(id, name, quantity, price, count);
                break;

            case 3:
                searchProduct(id, name, quantity, price, count);
                break;

            case 4:
                updateQuantity(id, quantity, count);
                break;

            case 5:
                printf("Thank you! Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 5);

    return 0;
}

// Add Product
void addProduct(int id[], char name[][30], int quantity[], float price[], int *count)
{
    if(*count >= MAX)
    {
        printf("Inventory is Full!\n");
        return;
    }

    printf("\nEnter Product ID: ");
    scanf("%d", &id[*count]);

    printf("Enter Product Name: ");
    scanf(" %[^\n]", name[*count]);

    printf("Enter Quantity: ");
    scanf("%d", &quantity[*count]);

    printf("Enter Price: ");
    scanf("%f", &price[*count]);

    (*count)++;

    printf("Product Added Successfully!\n");
}

// Display Products
void displayProducts(int id[], char name[][30], int quantity[], float price[], int count)
{
    int i;

    if(count == 0)
    {
        printf("No Products Available.\n");
        return;
    }

    printf("\n-------------------------------------------------------------\n");
    printf("ID\tName\t\tQuantity\tPrice\n");
    printf("-------------------------------------------------------------\n");

    for(i = 0; i < count; i++)
    {
        printf("%d\t%-15s%d\t\t%.2f\n",
               id[i], name[i], quantity[i], price[i]);
    }
}

// Search Product
void searchProduct(int id[], char name[][30], int quantity[], float price[], int count)
{
    int searchId, i, found = 0;

    if(count == 0)
    {
        printf("Inventory is Empty.\n");
        return;
    }

    printf("Enter Product ID to Search: ");
    scanf("%d", &searchId);

    for(i = 0; i < count; i++)
    {
        if(id[i] == searchId)
        {
            printf("\nProduct Found\n");
            printf("ID       : %d\n", id[i]);
            printf("Name     : %s\n", name[i]);
            printf("Quantity : %d\n", quantity[i]);
            printf("Price    : %.2f\n", price[i]);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Product Not Found!\n");
    }
}

// Update Quantity
void updateQuantity(int id[], int quantity[], int count)
{
    int searchId, newQty, i, found = 0;

    if(count == 0)
    {
        printf("Inventory is Empty.\n");
        return;
    }

    printf("Enter Product ID: ");
    scanf("%d", &searchId);

    for(i = 0; i < count; i++)
    {
        if(id[i] == searchId)
        {
            printf("Current Quantity: %d\n", quantity[i]);
            printf("Enter New Quantity: ");
            scanf("%d", &newQty);

            quantity[i] = newQty;

            printf("Quantity Updated Successfully!\n");
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Product Not Found!\n");
    }
}