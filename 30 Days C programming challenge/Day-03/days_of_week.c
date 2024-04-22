#include <stdio.h>

#define DAYS_IN_WEEK 7

int main() {
    // Array of day names
    char *day_names[DAYS_IN_WEEK] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    // Loop to print each day's name
    for (int i = 0; i < DAYS_IN_WEEK; i++) {
        printf("Day %d: %s\n", i + 1, day_names[i]);
    }

    return 0;
}
