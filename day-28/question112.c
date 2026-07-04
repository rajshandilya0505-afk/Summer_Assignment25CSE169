//Write a program to Create contact management system
#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[20];
    char email[100];
};

int main() {
    struct Contact contacts[100];
    int n = 0, choice, i;
    char searchName[50];

    while (1) {
        printf("\n===== Contact Management System =====\n");
        printf("1. Add Contact\n");
        printf("2. Display All Contacts\n");
        printf("3. Search Contact by Name\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Enter Name: ");
            scanf("%s", contacts[n].name);

            printf("Enter Phone Number: ");
            scanf("%s", contacts[n].phone);

            printf("Enter Email Address: ");
            scanf("%s", contacts[n].email);

            n++;
            printf("Contact added successfully.\n");
            break;

        case 2:
            if (n == 0) {
                printf("No contacts found.\n");
            } else {
                printf("\nContact Records:\n");
                printf("Name\t\tPhone\t\t\tEmail\n");
                for (i = 0; i < n; i++) {
                    printf("%s\t\t%s\t\t%s\n",
                           contacts[i].name,
                           contacts[i].phone,
                           contacts[i].email);
                }
            }
            break;

        case 3:
            printf("Enter Name to Search: ");
            scanf("%s", searchName);

            for (i = 0; i < n; i++) {
                if (strcmp(contacts[i].name, searchName) == 0) {
                    printf("\nContact Found:\n");
                    printf("Name   : %s\n", contacts[i].name);
                    printf("Phone  : %s\n", contacts[i].phone);
                    printf("Email  : %s\n", contacts[i].email);
                    break;
                }
            }

            if (i == n) {
                printf("Contact not found.\n");
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