//Write a program to Create library management system
#include <stdio.h>

struct Book {
    int id;
    char title[50];
    char author[50];
};

int main() {
    struct Book book[100];
    int n = 0, choice, i, id, found;

    while (1) {
        printf("\n===== Library Management System =====\n");
        printf("1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Search Book by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Enter Book ID: ");
            scanf("%d", &book[n].id);

            printf("Enter Book Title: ");
            scanf("%s", book[n].title);

            printf("Enter Author Name: ");
            scanf("%s", book[n].author);

            n++;
            printf("Book added successfully.\n");
            break;

        case 2:
            if (n == 0) {
                printf("No books available.\n");
            } else {
                printf("\nBook Records:\n");
                printf("ID\tTitle\tAuthor\n");
                for (i = 0; i < n; i++) {
                    printf("%d\t%s\t%s\n", book[i].id, book[i].title, book[i].author);
                }
            }
            break;

        case 3:
            printf("Enter Book ID to Search: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++) {
                if (book[i].id == id) {
                    printf("\nBook Found:\n");
                    printf("Book ID : %d\n", book[i].id);
                    printf("Title   : %s\n", book[i].title);
                    printf("Author  : %s\n", book[i].author);
                    found = 1;
                    break;
                }
            }

            if (!found) {
                printf("Book not found.\n");
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
