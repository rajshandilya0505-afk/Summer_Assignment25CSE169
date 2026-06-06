#include <stdio.h>

int sumOfDigits(int n) {
    int sum = 0;
    
    if (n < 0)
        n = -n;
    
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    
    return sum;
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Sum of digits = %d\n", sumOfDigits(num));
    
    return 0;
}