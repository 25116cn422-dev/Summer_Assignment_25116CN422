//program to create student record system using arrays and strings
#include <stdio.h>
#include <string.h>

int main()
{
    int roll[50], marks[50];
    char name[50][30];
    int n, i, choice, searchRoll, found;

    printf("Enter number of students: ");
    scanf("%d", &n);

    do
    {
        printf("\n===== Student Record System =====\n");
        printf("1. Add Student Records\n");
        printf("2. Display Student Records\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nEnter Student Details:\n");
                for(i = 0; i < n; i++)
                {
                    printf("\nStudent %d\n", i + 1);

                    printf("Roll Number: ");
                    scanf("%d", &roll[i]);

                    printf("Name: ");
                    scanf(" %[^\n]", name[i]);

                    printf("Marks: ");
                    scanf("%d", &marks[i]);
                }
                break;

            case 2:
                printf("\n----- Student Records -----\n");
                printf("Roll\tName\t\tMarks\n");

                for(i = 0; i < n; i++)
                {
                    printf("%d\t%-15s%d\n", roll[i], name[i], marks[i]);
                }
                break;

            case 3:
                found = 0;

                printf("Enter Roll Number to Search: ");
                scanf("%d", &searchRoll);

                for(i = 0; i < n; i++)
                {
                    if(roll[i] == searchRoll)
                    {
                        printf("\nStudent Found\n");
                        printf("Roll Number : %d\n", roll[i]);
                        printf("Name        : %s\n", name[i]);
                        printf("Marks       : %d\n", marks[i]);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Student Not Found.\n");

                break;

            case 4:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}