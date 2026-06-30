//program to create menu-driven calculator
#include <stdio.h>

// Function Declarations
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main()
{
    float num1, num2, result;
    int choice;

    do
    {
        printf("\n========== MENU-DRIVEN CALCULATOR ==========\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice >= 1 && choice <= 4)
        {
            printf("Enter first number: ");
            scanf("%f", &num1);

            printf("Enter second number: ");
            scanf("%f", &num2);
        }

        switch(choice)
        {
            case 1:
                result = add(num1, num2);
                printf("Result = %.2f\n", result);
                break;

            case 2:
                result = subtract(num1, num2);
                printf("Result = %.2f\n", result);
                break;

            case 3:
                result = multiply(num1, num2);
                printf("Result = %.2f\n", result);
                break;

            case 4:
                if(num2 == 0)
                {
                    printf("Error! Division by zero is not allowed.\n");
                }
                else
                {
                    result = divide(num1, num2);
                    printf("Result = %.2f\n", result);
                }
                break;

            case 5:
                printf("Thank you! Exiting Calculator...\n");
                break;

            default:
                printf("Invalid Choice! Please try again.\n");
        }

    } while(choice != 5);

    return 0;
}

// Function for Addition
float add(float a, float b)
{
    return a + b;
}

// Function for Subtraction
float subtract(float a, float b)
{
    return a - b;
}

// Function for Multiplication
float multiply(float a, float b)
{
    return a * b;
}

// Function for Division
float divide(float a, float b)
{
    return a / b;
}