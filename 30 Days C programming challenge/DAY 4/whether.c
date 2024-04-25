#include <stdio.h>

int main() {
    int num, i, is_prime = 1;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is less than 2
    if (num < 2) {
        printf("%d is not a prime number.\n", num);
        return 0;
    }

    // Check for divisibility from 2 to sqrt(num)
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            is_prime = 0;
            break;
        }
    }

    // Output whether the number is prime or not
    if (is_prime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
