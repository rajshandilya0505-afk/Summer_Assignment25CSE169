//Write a program to Find largest prime factor
#include <stdio.h>


int isPrime(int num) {
    if (num <= 1) return 0;   
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;        
        }
    }
    return 1;                
}

int main() {
    long long number;
    int largestPrime = -1;

    
    printf("Enter a number: ");
    scanf("%lld", &number);

    
    for (long long i = 2; i <= number; i++) {
        if (number % i == 0) {      
            if (isPrime(i)) {        
                largestPrime = i;     
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
