//Write a program to Find duplicates in array.
#include <stdio.h>

int main() {
    int arr[100], n, i, j, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Duplicate elements are: ");
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                found = 1;
                break;
            }
        }
    }

    if(found == 0) {
        printf("No duplicates found.\n");
    }

    return 0;
}
