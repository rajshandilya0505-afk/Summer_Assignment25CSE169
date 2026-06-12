#include <stdio.h>

int main()
{
    int rows = 5;

    for (int i = 1; i <= rows; i++)
    {
        // Print spaces
        for (int j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }

        // Print increasing characters
        for (int j = 1; j <= i; j++)
        {
            printf("%c", 'A' + j - 1);
        }

        // Print decreasing characters
        for (int j = i - 1; j >= 1; j--)
        {
            printf("%c", 'A' + j - 1);
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}