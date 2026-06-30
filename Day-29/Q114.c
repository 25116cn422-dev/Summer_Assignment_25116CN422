//program to create menu-driven array operation system
#include <stdio.h>

// Function Declarations
void insertArray(int arr[], int *n);
void displayArray(int arr[], int n);
void searchElement(int arr[], int n);
void largestElement(int arr[], int n);
void smallestElement(int arr[], int n);
void sumArray(int arr[], int n);
void sortArray(int arr[], int n);

int main()
{
    int arr[100], n = 0, choice;

    do
    {
        printf("\n====== Array Operation System ======\n");
        printf("1. Insert Elements\n");
        printf("2. Display Array\n");
        printf("3. Search Element\n");
        printf("4. Find Largest Element\n");
        printf("5. Find Smallest Element\n");
        printf("6. Find Sum of Elements\n");
        printf("7. Sort Array (Ascending)\n");
        printf("8. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                insertArray(arr, &n);
                break;

            case 2:
                displayArray(arr, n);
                break;

            case 3:
                searchElement(arr, n);
                break;

            case 4:
                largestElement(arr, n);
                break;

            case 5:
                smallestElement(arr, n);
                break;

            case 6:
                sumArray(arr, n);
                break;

            case 7:
                sortArray(arr, n);
                break;

            case 8:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 8);

    return 0;
}

// Insert Elements
void insertArray(int arr[], int *n)
{
    int i;

    printf("Enter number of elements: ");
    scanf("%d", n);

    printf("Enter %d elements:\n", *n);

    for(i = 0; i < *n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

// Display Array
void displayArray(int arr[], int n)
{
    int i;

    if(n == 0)
    {
        printf("Array is Empty.\n");
        return;
    }

    printf("Array Elements: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

// Search Element
void searchElement(int arr[], int n)
{
    int key, i, found = 0;

    if(n == 0)
    {
        printf("Array is Empty.\n");
        return;
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            printf("Element found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Element not found.\n");
}

// Find Largest Element
void largestElement(int arr[], int n)
{
    int i, max;

    if(n == 0)
    {
        printf("Array is Empty.\n");
        return;
    }

    max = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }

    printf("Largest Element = %d\n", max);
}

// Find Smallest Element
void smallestElement(int arr[], int n)
{
    int i, min;

    if(n == 0)
    {
        printf("Array is Empty.\n");
        return;
    }

    min = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] < min)
            min = arr[i];
    }

    printf("Smallest Element = %d\n", min);
}

// Find Sum
void sumArray(int arr[], int n)
{
    int i, sum = 0;

    if(n == 0)
    {
        printf("Array is Empty.\n");
        return;
    }

    for(i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    printf("Sum of Elements = %d\n", sum);
}

// Sort Array
void sortArray(int arr[], int n)
{
    int i, j, temp;

    if(n == 0)
    {
        printf("Array is Empty.\n");
        return;
    }

    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Array Sorted Successfully.\n");
}