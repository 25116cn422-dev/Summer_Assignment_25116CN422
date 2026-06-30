//program to develop complete mini project using arrays,strings,and functions
#include <stdio.h>
#include <string.h>

#define MAX 50

// Function declarations
void addStudents(char names[][50], int marks[], int *count);
void displayStudents(char names[][50], int marks[], int count);
void searchStudent(char names[][50], int marks[], int count);
void highestMarks(char names[][50], int marks[], int count);

int main()
{
    char names[MAX][50];
    int marks[MAX];
    int count = 0;
    int choice;

    do
    {
        printf("\n===== Student Record Management =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Highest Marks\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addStudents(names, marks, &count);
                break;

            case 2:
                displayStudents(names, marks, count);
                break;

            case 3:
                searchStudent(names, marks, count);
                break;

            case 4:
                highestMarks(names, marks, count);
                break;

            case 5:
                printf("Thank you!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}

// Function to add student
void addStudents(char names[][50], int marks[], int *count)
{
    if(*count >= MAX)
    {
        printf("Student list is full.\n");
        return;
    }

    printf("Enter Student Name: ");
    scanf(" %49[^\n]", names[*count]);

    printf("Enter Marks: ");
    scanf("%d", &marks[*count]);

    (*count)++;

    printf("Student Added Successfully!\n");
}

// Function to display students
void displayStudents(char names[][50], int marks[], int count)
{
    int i;

    if(count == 0)
    {
        printf("No records found.\n");
        return;
    }

    printf("\nStudent Records\n");
    printf("----------------------------\n");

    for(i = 0; i < count; i++)
    {
        printf("%d. %s\t%d\n", i + 1, names[i], marks[i]);
    }
}

// Function to search student
void searchStudent(char names[][50], int marks[], int count)
{
    char search[50];
    int i, found = 0;

    if(count == 0)
    {
        printf("No records available.\n");
        return;
    }

    printf("Enter Student Name to Search: ");
    scanf(" %49[^\n]", search);

    for(i = 0; i < count; i++)
    {
        if(strcmp(names[i], search) == 0)
        {
            printf("\nStudent Found\n");
            printf("Name : %s\n", names[i]);
            printf("Marks: %d\n", marks[i]);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Student Not Found.\n");
    }
}

// Function to find highest marks
void highestMarks(char names[][50], int marks[], int count)
{
    int i, maxIndex = 0;

    if(count == 0)
    {
        printf("No records available.\n");
        return;
    }

    for(i = 1; i < count; i++)
    {
        if(marks[i] > marks[maxIndex])
        {
            maxIndex = i;
        }
    }

    printf("\nTop Student\n");
    printf("Name : %s\n", names[maxIndex]);
    printf("Marks: %d\n", marks[maxIndex]);
}