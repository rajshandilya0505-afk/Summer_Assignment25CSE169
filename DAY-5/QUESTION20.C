//Write a program to Find largest prime factor
#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) return 0;   // numbers <=1 are not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;         // not prime if divisible
        }
    }
    return 1;                 // prime if no divisors found
}

int main() {
    long long number;
    int largestPrime = -1;

    // Ask the user for a number
    printf("Enter a number: ");
    scanf("%lld", &number);

    // Find factors and check which ones are prime
    for (long long i = 2; i <= number; i++) {
        if (number % i == 0) {        // i is a factor
            if (isPrime(i)) {         // check if factor is prime
                largestPrime = i;     // update largest prime factor
            }
        }
    }

    if (largestPrime != -1) {
        printf("Largest prime factor of %lld is %d\n", number, largestPrime);
    } else {
        printf("%lld has no prime factors\n", number);
    }

    return 0;
}
