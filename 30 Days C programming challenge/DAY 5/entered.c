#include <stdio.h>

int main() {
    int num, i;
    unsigned long long factorial = 1;

    // Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate the factorial of the entered number
    for (i = 1; i <= num; i++) {
        factorial *= i;
    }

    // Print the factorial
    printf("The factorial of %d is %llu\n", num, factorial);

    return 0;
}
