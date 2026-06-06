#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int x, y;
    printf("Enter first number: ");
    fflush(stdout);
    if (scanf("%d", &x) != 1) {
        printf("Invalid input\n");
        return 1;
    }
    printf("Enter second number: ");
    fflush(stdout);
    if (scanf("%d", &y) != 1) {
        printf("Invalid input\n");
        return 1;
    }
    printf("GCD = %d\n", gcd(x, y));
    return 0;
}