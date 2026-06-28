//program to create employee management system
#include <stdio.h>
#include <string.h>
struct Employee {
    int id;
    char name[50];
    char department[30];
    float salary;
};
struct Employee emp[100];
int count = 0;
// Add Employees
void addEmployee() {
    int n;
    printf("\nHow many employees do you want to add? ");
    scanf("%d", &n);
    if (count + n > 100) {
        printf("Cannot add more than %d employees.\n", 100);
        return;
    }
    for (int i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("Enter Employee ID: ");
        scanf("%d", &emp[count].id);
        printf("Enter Name: ");
        scanf(" %[^\n]", emp[count].name);
        printf("Enter Department: ");
        scanf(" %[^\n]", emp[count].department);
        printf("Enter Salary: ");
        scanf("%f", &emp[count].salary);
        count++;
    }
    printf("\n%d employee(s) added successfully!\n", n);
}

// Display Employees
void displayEmployees() {
    if (count == 0) {
        printf("\nNo employee records found.\n");
        return;
    }
    printf("\n=========== Employee Records ===========\n");
    for (int i = 0; i < count; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("ID         : %d\n", emp[i].id);
        printf("Name       : %s\n", emp[i].name);
        printf("Department : %s\n", emp[i].department);
        printf("Salary     : %.2f\n", emp[i].salary);
    }
}

// Search Employee
void searchEmployee() {
    int id, found = 0;
    printf("\nEnter Employee ID to search: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (emp[i].id == id) {
            printf("\nEmployee Found\n");
            printf("ID         : %d\n", emp[i].id);
            printf("Name       : %s\n", emp[i].name);
            printf("Department : %s\n", emp[i].department);
            printf("Salary     : %.2f\n", emp[i].salary);
            found = 1;
            break;
        }
    }
    if (!found)
        printf("Employee not found.\n");
}

// Update Employee
void updateEmployee() {
    int id, found = 0;
    printf("\nEnter Employee ID to update: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (emp[i].id == id) {
            printf("\nEnter New Name: ");
            scanf(" %[^\n]", emp[i].name);
            printf("Enter New Department: ");
            scanf(" %[^\n]", emp[i].department);
            printf("Enter New Salary: ");
            scanf("%f", &emp[i].salary);
            printf("Employee record updated successfully.\n");
            found = 1;
            break;
        }
    }
    if (!found)
        printf("Employee not found.\n");
}

// Delete Employee
void deleteEmployee() {
    int id, found = 0;
    printf("\nEnter Employee ID to delete: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (emp[i].id == id) {
            for (int j = i; j < count - 1; j++) {
                emp[j] = emp[j + 1];
            }
            count--;
            found = 1;
            printf("Employee deleted successfully.\n");
            break;
        }
    }
    if (!found)
        printf("Employee not found.\n");
}
int main() {
    int choice;
    do {
        printf("\n========== Employee Management System ==========\n");
        printf("1. Add Employees\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Employee\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addEmployee();
                break;
            case 2:
                displayEmployees();
                break;
            case 3:
                searchEmployee();
                break;
            case 4:
                updateEmployee();
                break;
            case 5:
                deleteEmployee();
                break;
            case 6:
                printf("\nThank you! Exiting program...\n");
                break;
            default:
                printf("\nInvalid choice! Please try again.\n");
        }

    } while (choice != 6);

    return 0;
}