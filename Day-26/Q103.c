//program to create ATM simulation
#include <stdio.h>

int main() {
    int pin = 1234;
    int enteredPin;
    int choice;
    float balance = 1000.0;
    float amount;

    printf(" Welcome to ATM System\n");

    // PIN check
    printf("Enter your PIN: ");
    scanf("%d", &enteredPin);

    if (enteredPin != pin) {
        printf(" Incorrect PIN. Access Denied.\n");
        return 0;
    }

    printf(" Login Successful!\n");

    while (1) {
        printf("\n===== ATM MENU =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf(" Your balance is: ₹%.2f\n", balance);
                break;

            case 2:
                printf("Enter deposit amount: ");
                scanf("%f", &amount);

                if (amount > 0) {
                    balance += amount;
                    printf("₹%.2f deposited successfully.\n", amount);
                } else {
                    printf(" Invalid amount.\n");
                }
                break;

            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%f", &amount);

                if (amount > balance) {
                    printf(" Insufficient balance.\n");
                } else if (amount <= 0) {
                    printf(" Invalid amount.\n");
                } else {
                    balance -= amount;
                    printf(" ₹%.2f withdrawn successfully.\n", amount);
                }
                break;

            case 4:
                printf(" Thank you for using ATM.\n");
                return 0;

            default:
                printf(" Invalid choice. Try again.\n");
        }
    }

    return 0;
}