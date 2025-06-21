// Author: Dejan Janković
// Date: 20-06-2025
// Simple program to convert uppercase and lowercase characters.

#include <stdio.h>

int main(void)
{
    char character;

    printf("Enter uppercase character: ");
    scanf("%c", &character);

    // Check if the inputted character is uppercase.
    if (character < 'A' || character > 'Z')
    {
        printf("Non uppercase character inputted. Exiting.\n");
        return -1;
    }

    // Flip the 6th bit of the lowercase character from 0 to 1.
    printf("Lowercase character: %c\n", character | 0x20);

    return 0;
}