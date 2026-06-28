//program to create student record management system 
#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

struct Student s[100];
int count = 0;

// Function to add a student
void addStudent() {
    int n;

    printf("\nHow many students do you want to add? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &s[count].roll);

        printf("Enter Name: ");
        scanf(" %[^\n]", s[count].name);

        printf("Enter Marks: ");
        scanf("%f", &s[count].marks);

        count++;
    }

    printf("\n%d student(s) added successfully!\n", n);
}

// Function to display all students
void displayStudents() {
    if (count == 0) {
        printf("\nNo student records found.\n");
        return;
    }

    printf("\nStudent Records:\n");
    for (int i = 0; i < count; i++) {
        printf("Roll No : %d\n", s[i].roll);
        printf("Name    : %s\n", s[i].name);
        printf("Marks   : %.2f\n", s[i].marks);
    }
}

// Function to search student
void searchStudent() {
    int roll, found = 0;

    printf("\nEnter Roll Number to search: ");
    scanf("%d", &roll);

    for (int i = 0; i < count; i++) {
        if (s[i].roll == roll) {
            printf("\nStudent Found:\n");
            printf("Roll No : %d\n", s[i].roll);
            printf("Name    : %s\n", s[i].name);
            printf("Marks   : %.2f\n", s[i].marks);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Student record not found.\n");
}

// Function to delete student
void deleteStudent() {
    int roll, found = 0;

    printf("\nEnter Roll Number to delete: ");
    scanf("%d", &roll);

    for (int i = 0; i < count; i++) {
        if (s[i].roll == roll) {
            for (int j = i; j < count - 1; j++) {
                s[j] = s[j + 1];
            }
            count--;
            found = 1;
            printf("Student record deleted successfully!\n");
            break;
        }
    }

    if (!found)
        printf("Student record not found.\n");
}

int main() {
    int choice;

    do {
        printf("\n===== Student Record Management System =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                deleteStudent();
                break;
            case 5:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 5);

    return 0;
}