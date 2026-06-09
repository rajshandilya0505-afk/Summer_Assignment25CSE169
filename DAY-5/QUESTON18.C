//Write a program to Check strong number
#include <stdio.h>

// Function to calculate factorial of a number
int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;   // multiply fact by i
    }
    return fact;
}

int main() {
    int number, temp, digit, sum = 0;

    // Ask the user for a number
    printf("Enter a number: ");
    scanf("%d", &number);

    temp = number;  // store original number for later comparison

    // Break the number into digits and calculate sum of factorials
    while (temp > 0) {
        digit = temp % 10;              // extract last digit
        sum += factorial(digit);        // add factorial of digit to sum
        temp /= 10;                     // remove last digit
    }

    // Check if sum of factorials equals the original number
    if (sum == number) {
        printf("%d is a Strong Number\n", number);
    } else {
        printf("%d is NOT a Strong Number\n", number);
    }

    return 0;
}
