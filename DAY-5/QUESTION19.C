//	Write a program to Print factors of a number
#include <stdio.h>

int main() {
    int number;

    // Ask the user for a number
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Factors of %d are: ", number);

    // Loop through numbers from 1 to the given number
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            printf("%d ", i);  // Print i if it divides the number evenly
        }
    }

    printf("\n");  // Move to the next line after printing all factors
    return 0;
}
