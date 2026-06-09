#include <stdio.h>

int main() {
    int number, divisor, sum = 0;

    // Ask the user for a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check all divisors of the number (except the number itself)
    for (divisor = 1; divisor < number; divisor++) {
        if (number % divisor == 0) {
            sum += divisor;  // Add divisor to sum if it divides evenly
        }
    }

    // Compare the sum of divisors with the original number
    if (sum == number) {
        printf("%d is a Perfect Number\n", number);
    } else {
        printf("%d is NOT a Perfect Number\n", number);
    }

    return 0;
}
