#include <stdio.h>
#include <string.h>

int countVowels(char *str) {
    int count = 0;
    int length = strlen(str);

    // Iterate through each character of the string
    for (int i = 0; i < length; i++) {
        // Check if the current character is a vowel (case insensitive)
        if (str[i] == 'a' || str[i] == 'A' ||
            str[i] == 'e' || str[i] == 'E' ||
            str[i] == 'i' || str[i] == 'I' ||
            str[i] == 'o' || str[i] == 'O' ||
            str[i] == 'u' || str[i] == 'U') {
            count++;
        }
    }

    return count;
}

int main() {
    char str[100]; // Assuming maximum input string length is 100 characters

    // Ask the user to enter a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character at the end of the string, if present
    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';

    // Count the number of vowels in the string
    int vowelsCount = countVowels(str);

    // Print the result
    printf("Number of vowels in the string: %d\n", vowelsCount);

    return 0;
}
