//	Write a program to Rotate array right.
#include <stdio.h>

int main() {
    int n, k, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of rotations: ");
    scanf("%d", &k);

    k = k % n;   // Handle rotations greater than array size

    int temp[k];

    // Store last k elements
    for(i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Shift remaining elements to the right
    for(i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    // Place stored elements at the beginning
    for(i = 0; i < k; i++) {
        arr[i] = temp[i];
    }

    printf("Array after right rotation:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}