#include <stdio.h>
#include <string.h>

int main() {
    char str[100]; // Assuming maximum input string length is 100 characters

    // Ask the user to enter a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character at the end of the string, if present
    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';

    // Print the string in reverse
    printf("Reversed string: ");
    for (int i = strlen(str) - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
