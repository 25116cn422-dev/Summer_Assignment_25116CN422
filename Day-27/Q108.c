//program to create marksheet generation system
#include <stdio.h>

#define MAX 100

struct Student {
    int rollNo;
    char name[50];
    int marks[5];
    int total;
    float percentage;
    char grade;
};

struct Student stu[MAX];
int count = 0;

// Calculate Total, Percentage and Grade
void calculateResult(int i) {
    stu[i].total = 0;

    for (int j = 0; j < 5; j++)
        stu[i].total += stu[i].marks[j];

    stu[i].percentage = stu[i].total / 5.0;

    if (stu[i].percentage >= 90)
        stu[i].grade = 'A';
    else if (stu[i].percentage >= 75)
        stu[i].grade = 'B';
    else if (stu[i].percentage >= 60)
        stu[i].grade = 'C';
    else if (stu[i].percentage >= 40)
        stu[i].grade = 'D';
    else
        stu[i].grade = 'F';
}

// Add Students
void addStudent() {
    int n;

    printf("How many students do you want to add? ");
    scanf("%d", &n);

    if (count + n > MAX) {
        printf("Memory Full!\n");
        return;
    }

    for (int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &stu[count].rollNo);

        printf("Enter Name: ");
        scanf(" %[^\n]", stu[count].name);

        printf("Enter marks of 5 subjects:\n");
        for (int j = 0; j < 5; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &stu[count].marks[j]);
        }

        calculateResult(count);
        count++;
    }

    printf("\nStudent record(s) added successfully.\n");
}

// Display All Marksheets
void displayStudents() {
    if (count == 0) {
        printf("\nNo records found.\n");
        return;
    }

    printf("\n================= MARKSHEET =================\n");

    for (int i = 0; i < count; i++) {
        printf("\nRoll No    : %d\n", stu[i].rollNo);
        printf("Name       : %s\n", stu[i].name);

        printf("Marks      : ");
        for (int j = 0; j < 5; j++)
            printf("%d ", stu[i].marks[j]);

        printf("\nTotal      : %d", stu[i].total);
        printf("\nPercentage : %.2f%%", stu[i].percentage);
        printf("\nGrade      : %c\n", stu[i].grade);
    }
}

// Search Student
void searchStudent() {
    int roll, found = 0;

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    for (int i = 0; i < count; i++) {
        if (stu[i].rollNo == roll) {

            printf("\n========== MARKSHEET ==========\n");
            printf("Roll No    : %d\n", stu[i].rollNo);
            printf("Name       : %s\n", stu[i].name);

            printf("Marks      : ");
            for (int j = 0; j < 5; j++)
                printf("%d ", stu[i].marks[j]);

            printf("\nTotal      : %d", stu[i].total);
            printf("\nPercentage : %.2f%%", stu[i].percentage);
            printf("\nGrade      : %c\n", stu[i].grade);

            found = 1;
            break;
        }
    }

    if (!found)
        printf("Student not found.\n");
}

int main() {
    int choice;

    do {
        printf("\n========== Marksheet Generation System ==========\n");
        printf("1. Add Students\n");
        printf("2. Display All Marksheets\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
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
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}