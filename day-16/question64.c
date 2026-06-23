//Write a program to Remove duplicates from array.
#include <stdio.h>

int main() {
    int n, i, j, k;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Remove duplicates
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                // Shift elements to the left
                for(k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }

                n--;      // Reduce array size
                j--;      // Check the current position again
            }
        }
    }

    printf("Array after removing duplicates:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
