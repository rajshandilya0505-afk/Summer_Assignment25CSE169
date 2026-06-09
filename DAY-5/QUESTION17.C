#include <stdio.h>

int main() {
    int number, divisor, sum = 0;

    
    printf("Enter a number: ");
    scanf("%d", &number);

    
    for (divisor = 1; divisor < number; divisor++) {
        if (number % divisor == 0) {
            sum += divisor;  
        }
    }

    
    if (sum == number) {
        printf("%d is a Perfect Number\n", number);
    } else {
        printf("%d is NOT a Perfect Number\n", number);
    }

    return 0;
}
