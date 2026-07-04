//Write a program to Create ticket booking system.
#include <stdio.h>

struct Ticket {
    int ticketNo;
    char name[50];
    int seats;
};

int main() {
    struct Ticket t[100];
    int n = 0, choice, i, ticketNo, found;

    while (1) {
        printf("\n===== Ticket Booking System =====\n");
        printf("1. Book Ticket\n");
        printf("2. Display All Bookings\n");
        printf("3. Search Booking by Ticket Number\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Enter Ticket Number: ");
            scanf("%d", &t[n].ticketNo);

            printf("Enter Passenger Name: ");
            scanf("%s", t[n].name);

            printf("Enter Number of Seats: ");
            scanf("%d", &t[n].seats);

            n++;
            printf("Ticket booked successfully.\n");
            break;

        case 2:
            if (n == 0) {
                printf("No bookings found.\n");
            } else {
                printf("\nBooking Records:\n");
                printf("Ticket No\tName\tSeats\n");
                for (i = 0; i < n; i++) {
                    printf("%d\t\t%s\t%d\n",
                           t[i].ticketNo,
                           t[i].name,
                           t[i].seats);
                }
            }
            break;

        case 3:
            printf("Enter Ticket Number to Search: ");
            scanf("%d", &ticketNo);

            found = 0;
            for (i = 0; i < n; i++) {
                if (t[i].ticketNo == ticketNo) {
                    printf("\nBooking Found:\n");
                    printf("Ticket Number : %d\n", t[i].ticketNo);
                    printf("Passenger Name: %s\n", t[i].name);
                    printf("Seats Booked  : %d\n", t[i].seats);
                    found = 1;
                    break;
                }
            }

            if (!found) {
                printf("Booking not found.\n");
            }
            break;

        case 4:
            printf("Exiting program...\n");
            return 0;

        default:
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}