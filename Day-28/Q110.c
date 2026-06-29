//program to create bank account system 
#include <stdio.h>

struct Account
{
    int accountNo;
    char name[50];
    float balance;
};

struct Account bank[100];
int count = 0;

// Create a new account
void createAccount()
{
    printf("\nEnter Account Number: ");
    scanf("%d", &bank[count].accountNo);

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", bank[count].name);

    printf("Enter Initial Balance: ");
    scanf("%f", &bank[count].balance);

    count++;
    printf("Account Created Successfully!\n");
}

// Display all accounts
void displayAccounts()
{
    if (count == 0)
    {
        printf("\nNo accounts found.\n");
        return;
    }

    printf("\n----- Account Details -----\n");

    for (int i = 0; i < count; i++)
    {
        printf("\nAccount %d\n", i + 1);
        printf("Account Number: %d\n", bank[i].accountNo);
        printf("Name: %s\n", bank[i].name);
        printf("Balance: %.2f\n", bank[i].balance);
    }
}

// Deposit money
void deposit()
{
    int acc;
    float amount;

    printf("\nEnter Account Number: ");
    scanf("%d", &acc);

    for (int i = 0; i < count; i++)
    {
        if (bank[i].accountNo == acc)
        {
            printf("Enter Deposit Amount: ");
            scanf("%f", &amount);

            bank[i].balance += amount;

            printf("Deposit Successful!\n");
            printf("New Balance: %.2f\n", bank[i].balance);
            return;
        }
    }

    printf("Account Not Found!\n");
}

// Withdraw money
void withdraw()
{
    int acc;
    float amount;

    printf("\nEnter Account Number: ");
    scanf("%d", &acc);

    for (int i = 0; i < count; i++)
    {
        if (bank[i].accountNo == acc)
        {
            printf("Enter Withdrawal Amount: ");
            scanf("%f", &amount);

            if (amount <= bank[i].balance)
            {
                bank[i].balance -= amount;
                printf("Withdrawal Successful!\n");
                printf("Remaining Balance: %.2f\n", bank[i].balance);
            }
            else
            {
                printf("Insufficient Balance!\n");
            }
            return;
        }
    }

    printf("Account Not Found!\n");
}

// Search account
void searchAccount()
{
    int acc;

    printf("\nEnter Account Number: ");
    scanf("%d", &acc);

    for (int i = 0; i < count; i++)
    {
        if (bank[i].accountNo == acc)
        {
            printf("\nAccount Found!\n");
            printf("Account Number: %d\n", bank[i].accountNo);
            printf("Name: %s\n", bank[i].name);
            printf("Balance: %.2f\n", bank[i].balance);
            return;
        }
    }

    printf("Account Not Found!\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n===== Bank Account Management System =====\n");
        printf("1. Create Account\n");
        printf("2. Display Accounts\n");
        printf("3. Deposit Money\n");
        printf("4. Withdraw Money\n");
        printf("5. Search Account\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                createAccount();
                break;

            case 2:
                displayAccounts();
                break;

            case 3:
                deposit();
                break;

            case 4:
                withdraw();
                break;

            case 5:
                searchAccount();
                break;

            case 6:
                printf("Thank you!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 6);

    return 0;
}