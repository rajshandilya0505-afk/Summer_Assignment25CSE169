//Write a program to Sort names alphabetically.
#include <stdio.h>
int main() {
    char names[10][50], temp[50];
    int i, j;

    printf("Enter 10 names:\n");
    for(i = 0; i < 10; i++) {
        fgets(names[i], sizeof(names[i]), stdin);
    }

    // Sort names alphabetically
    for(i = 0; i < 10 - 1; i++) {
        for(j = i + 1; j < 10; j++) {
            if(strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    printf("\nNames in alphabetical order:\n");
    for(i = 0; i < 10; i++) {
        printf("%s", names[i]);
    }

    return 0;
}