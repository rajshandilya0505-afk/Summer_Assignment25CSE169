//Write a program to Check strong number
#include <stdio.h>
int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;   // multiply fact by i
    }
    return fact;
}

int main() {
    int number, temp, digit, sum = 0;

    
    printf("Enter a number: ");
    scanf("%d", &number);

    temp = number;  

    
    while (temp > 0) {
        digit = temp % 10;              
        sum += factorial(digit);        
        temp /= 10;                     
    }

    
    if (sum == number) {
        printf("%d is a Strong Number\n", number);
    } else {
        printf("%d is NOT a Strong Number\n", number);
    }

    return 0;
}
