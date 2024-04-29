#include <stdio.h>

int main() {
    int rows, cols, i, j;

    // Get the number of rows from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Outer loop for rows
    for (i = 1; i <= rows; i++) {
        // Inner loop for columns
        for (j = 1; j <= i; j++) {
            printf("* "); // Print a star
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
