//program to create ticket booking system 
#include <stdio.h>

struct Ticket
{
    int seatNo;
    int booked;   // 0 = Available, 1 = Booked
};

struct Ticket seats[10];

// Initialize seats
void initializeSeats()
{
    for (int i = 0; i < 10; i++)
    {
        seats[i].seatNo = i + 1;
        seats[i].booked = 0;
    }
}

// Display seat status
void displaySeats()
{
    printf("\n----- Seat Status -----\n");

    for (int i = 0; i < 10; i++)
    {
        printf("Seat %d : ", seats[i].seatNo);

        if (seats[i].booked == 0)
            printf("Available\n");
        else
            printf("Booked\n");
    }
}

// Book a ticket
void bookTicket()
{
    int seat;

    printf("\nEnter Seat Number (1-10): ");
    scanf("%d", &seat);

    if (seat < 1 || seat > 10)
    {
        printf("Invalid Seat Number!\n");
        return;
    }

    if (seats[seat - 1].booked == 0)
    {
        seats[seat - 1].booked = 1;
        printf("Ticket Booked Successfully!\n");
    }
    else
    {
        printf("Seat Already Booked!\n");
    }
}

// Cancel a ticket
void cancelTicket()
{
    int seat;

    printf("\nEnter Seat Number to Cancel: ");
    scanf("%d", &seat);

    if (seat < 1 || seat > 10)
    {
        printf("Invalid Seat Number!\n");
        return;
    }

    if (seats[seat - 1].booked == 1)
    {
        seats[seat - 1].booked = 0;
        printf("Ticket Cancelled Successfully!\n");
    }
    else
    {
        printf("Seat is Already Available!\n");
    }
}

// Main function
int main()
{
    int choice;

    initializeSeats();

    do
    {
        printf("\n===== Ticket Booking System =====\n");
        printf("1. Display Seats\n");
        printf("2. Book Ticket\n");
        printf("3. Cancel Ticket\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                displaySeats();
                break;

            case 2:
                bookTicket();
                break;

            case 3:
                cancelTicket();
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 4);

    return 0;
}