//Write a program to Find common elements.
#include <stdio.h>
int main() {
    int a[50], b[50];
    int n1, n2, i, j, found;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first array:\n");
    for (i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second array:\n");
    for (i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    printf("Common elements: ");

    for (i = 0; i < n1; i++) {
        found = 0;

        // Check if a[i] exists in second array
        for (j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                found = 1;
                break;
            }
        }

        // Avoid printing duplicates
        if (found) {
            int duplicate = 0;

            for (j = 0; j < i; j++) {
                if (a[i] == a[j]) {
                    duplicate = 1;
                    break;
                }
            }

            if (!duplicate) {
                printf("%d ", a[i]);
            }
        }
    }

    return 0;
}