//Write a program to Create mini library system.
#include <stdio.h>

int main() {
    int n, i;
    int bookId[50];
    char bookName[50][50];
    char author[50][50];

    printf("Enter the number of books: ");
    scanf("%d", &n);

    // Input book details
    for(i = 0; i < n; i++) {
        printf("\nBook %d\n", i + 1);

        printf("Enter Book ID: ");
        scanf("%d", &bookId[i]);

        printf("Enter Book Name: ");
        scanf("%s", bookName[i]);

        printf("Enter Author Name: ");
        scanf("%s", author[i]);
    }

    // Display book details
    printf("\n----- Library Records -----\n");
    printf("Book ID\tBook Name\tAuthor\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%-15s\t%s\n", bookId[i], bookName[i], author[i]);
    }

    return 0;
}