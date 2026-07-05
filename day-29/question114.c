//Write a program to Create menu-driven array operations system.
#include <stdio.h>

int main() {
    int arr[100], n, i, choice, key, found = 0;
    int sum = 0, max, min;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    do {
        printf("\n===== MENU DRIVEN ARRAY OPERATIONS =====\n");
        printf("1. Display Array\n");
        printf("2. Search Element\n");
        printf("3. Find Maximum\n");
        printf("4. Find Minimum\n");
        printf("5. Calculate Sum\n");
        printf("6. Calculate Average\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Array Elements: ");
                for (i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 2:
                printf("Enter element to search: ");
                scanf("%d", &key);
                found = 0;
                for (i = 0; i < n; i++) {
                    if (arr[i] == key) {
                        printf("Element found at position %d\n", i + 1);
                        found = 1;
                        break;
                    }
                }
                if (!found)
                    printf("Element not found.\n");
                break;

            case 3:
                max = arr[0];
                for (i = 1; i < n; i++) {
                    if (arr[i] > max)
                        max = arr[i];
                }
                printf("Maximum element = %d\n", max);
                break;

            case 4:
                min = arr[0];
                for (i = 1; i < n; i++) {
                    if (arr[i] < min)
                        min = arr[i];
                }
                printf("Minimum element = %d\n", min);
                break;

            case 5:
                sum = 0;
                for (i = 0; i < n; i++) {
                    sum += arr[i];
                }
                printf("Sum = %d\n", sum);
                break;

            case 6:
                sum = 0;
                for (i = 0; i < n; i++) {
                    sum += arr[i];
                }
                printf("Average = %.2f\n", (float)sum / n);
                break;

            case 7:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 7);

    return 0;
}