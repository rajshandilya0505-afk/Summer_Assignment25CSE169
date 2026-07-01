//	Write a program to Find longest word.
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    char longestWord[100] = "";
    char word[100];
    int i, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ') {
            word[j] = '\0';
            if(strlen(word) > strlen(longestWord)) {
                strcpy(longestWord, word);
            }
            j = 0;
        } else {
            word[j++] = str[i];
        }
    }

    word[j] = '\0';
    if(strlen(word) > strlen(longestWord)) {
        strcpy(longestWord, word);
    }

    printf("Longest word: %s\n", longestWord);

    return 0;
}