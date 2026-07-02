//Write a program to Sort words by length..
#include <stdio.h>
#include <string.h>
int main() {
    char str[100], words[20][20], temp[20];
    int i, j, wordCount = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Split the string into words
    char *token = strtok(str, " \n");
    while (token != NULL) {
        strcpy(words[wordCount++], token);
        token = strtok(NULL, " \n");
    }

    // Sort words by length
    for(i = 0; i < wordCount - 1; i++) {
        for(j = i + 1; j < wordCount; j++) {
            if(strlen(words[i]) > strlen(words[j])) {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    printf("Words sorted by length:\n");
    for(i = 0; i < wordCount; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}