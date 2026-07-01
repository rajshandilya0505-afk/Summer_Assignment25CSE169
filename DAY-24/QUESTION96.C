//Write a program to Remove duplicate characters.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str) - 1; // Exclude the newline character

    for (i = 0; i < len; i++) {
        for (j = i + 1; j < len; j++) {
            if (str[i] == str[j]) {
                // Shift characters to the left
                for (int k = j; k < len; k++) {
                    str[k] = str[k + 1];
                }
                len--; // Decrease the length of the string
                j--;   // Adjust the index
            }
        }
    }

    printf("String after removing duplicates: %s\n", str);

    return 0;
}