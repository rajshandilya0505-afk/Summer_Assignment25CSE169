//Write a program to Write function to find factorial.........
#include <stdio.h>

// Function to find factorial
int factorial(int n) {
    int fact = 1;

    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}

int main() {
    int num = 5;

    printf("Factorial of %d is %d\n", num, factorial(num));

    return 0;
}