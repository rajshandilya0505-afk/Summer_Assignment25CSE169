
#include <stdio.h>

int isprime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int start, end;

    printf("Enter start: ");
    fflush(stdout);
    scanf("%d", &start);

    printf("Enter end: ");
    fflush(stdout);
    scanf("%d", &end);

    printf("Primes between %d and %d:\n", start, end);

    for (int i = start; i <= end; i++) {
        if (isprime(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
