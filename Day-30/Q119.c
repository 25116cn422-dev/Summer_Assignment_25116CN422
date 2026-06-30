//program to create mini employee managent system
#include <stdio.h>
#include <string.h>

#define MAX 100

// Function Declarations
void addEmployee(int id[], char name[][50], float salary[], int *count);
void displayEmployees(int id[], char name[][50], float salary[], int count);
void searchEmployee(int id[], char name[][50], float salary[], int count);
void highestSalary(int id[], char name[][50], float salary[], int count);

int main()
{
    int id[MAX], count = 0, choice;
    char name[MAX][50];
    float salary[MAX];

    do
    {
        printf("\n====== Employee Management System ======\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Employee with Highest Salary\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addEmployee(id, name, salary, &count);
                break;

            case 2:
                displayEmployees(id, name, salary, count);
                break;

            case 3:
                searchEmployee(id, name, salary, count);
                break;

            case 4:
                highestSalary(id, name, salary, count);
                break;

            case 5:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}

// Add Employee
void addEmployee(int id[], char name[][50], float salary[], int *count)
{
    if(*count >= MAX)
    {
        printf("Employee List Full!\n");
        return;
    }

    printf("Enter Employee ID: ");
    scanf("%d", &id[*count]);

    printf("Enter Employee Name: ");
    scanf(" %49[^\n]", name[*count]);

    printf("Enter Employee Salary: ");
    scanf("%f", &salary[*count]);

    (*count)++;

    printf("Employee Added Successfully!\n");
}

// Display Employees
void displayEmployees(int id[], char name[][50], float salary[], int count)
{
    int i;

    if(count == 0)
    {
        printf("No Employee Records Found.\n");
        return;
    }

    printf("\n-----------------------------------------------\n");
    printf("ID\tName\t\tSalary\n");
    printf("-----------------------------------------------\n");

    for(i = 0; i < count; i++)
    {
        printf("%d\t%-15s%.2f\n", id[i], name[i], salary[i]);
    }
}

// Search Employee
void searchEmployee(int id[], char name[][50], float salary[], int count)
{
    int searchId, i, found = 0;

    if(count == 0)
    {
        printf("No Employee Records.\n");
        return;
    }

    printf("Enter Employee ID to Search: ");
    scanf("%d", &searchId);

    for(i = 0; i < count; i++)
    {
        if(id[i] == searchId)
        {
            printf("\nEmployee Found\n");
            printf("ID     : %d\n", id[i]);
            printf("Name   : %s\n", name[i]);
            printf("Salary : %.2f\n", salary[i]);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Employee Not Found!\n");
    }
}

// Highest Salary
void highestSalary(int id[], char name[][50], float salary[], int count)
{
    int i, max = 0;

    if(count == 0)
    {
        printf("No Employee Records.\n");
        return;
    }

    for(i = 1; i < count; i++)
    {
        if(salary[i] > salary[max])
            max = i;
    }

    printf("\nEmployee with Highest Salary\n");
    printf("ID     : %d\n", id[max]);
    printf("Name   : %s\n", name[max]);
    printf("Salary : %.2f\n", salary[max]);
}