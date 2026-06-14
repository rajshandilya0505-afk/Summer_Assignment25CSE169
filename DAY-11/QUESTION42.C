//Write a program to Write function to find maximum..............
#include <stdio.h>

// Function to find the maximum number
int maximum(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int x = 15, y = 25;

    printf("Maximum of %d and %d is %d\n", x, y, maximum(x, y));

    return 0;
}
