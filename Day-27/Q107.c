//program to create salary management system 
#include <stdio.h>

#define MAX 100

struct Employee {
    int id;
    char name[50];
    float basicSalary;
    float hra;
    float da;
    float grossSalary;
};

struct Employee emp[MAX];
int count = 0;

// Calculate Gross Salary
void calculateSalary(int i) {
    emp[i].hra = 0.20 * emp[i].basicSalary;   // 20% HRA
    emp[i].da  = 0.10 * emp[i].basicSalary;   // 10% DA
    emp[i].grossSalary = emp[i].basicSalary + emp[i].hra + emp[i].da;
}

// Add Employees
void addEmployee() {
    int n;

    printf("How many employees do you want to add? ");
    scanf("%d", &n);

    if (count + n > MAX) {
        printf("Memory Full!\n");
        return;
    }

    for (int i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &emp[count].id);

        printf("Enter Employee Name: ");
        scanf(" %[^\n]", emp[count].name);

        printf("Enter Basic Salary: ");
        scanf("%f", &emp[count].basicSalary);

        calculateSalary(count);
        count++;
    }
    printf("\nEmployee record(s) added successfully.\n");
}

// Display Employees
void displayEmployees() {

    if (count == 0) {
        printf("\nNo records found.\n");
        return;
    }
    printf("ID\tName\t\tBasic\tHRA\tDA\tGross\n");
    for (int i = 0; i < count; i++) {
        printf("%d\t%-15s%.2f\t%.2f\t%.2f\t%.2f\n",
               emp[i].id,
               emp[i].name,
               emp[i].basicSalary,
               emp[i].hra,
               emp[i].da,
               emp[i].grossSalary);
    }
}

// Search Employee
void searchEmployee() {
    int id, found = 0;

    printf("Enter Employee ID: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (emp[i].id == id) {
            printf("\nEmployee Found\n");
            printf("ID           : %d\n", emp[i].id);
            printf("Name         : %s\n", emp[i].name);
            printf("Basic Salary : %.2f\n", emp[i].basicSalary);
            printf("HRA          : %.2f\n", emp[i].hra);
            printf("DA           : %.2f\n", emp[i].da);
            printf("Gross Salary : %.2f\n", emp[i].grossSalary);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Employee not found.\n");
}

// Update Salary
void updateSalary() {
    int id, found = 0;

    printf("Enter Employee ID: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (emp[i].id == id) {
            printf("Enter New Basic Salary: ");
            scanf("%f", &emp[i].basicSalary);

            calculateSalary(i);

            printf("Salary updated successfully.\n");
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

    printf("Enter Employee ID: ");
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

        printf("\n========== Salary Management System ==========\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Salary\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
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
                updateSalary();
                break;
            case 5:
                deleteEmployee();
                break;
            case 6:
                printf("Thank You!\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }
    }
    while(choice != 6);
    return 0;
}