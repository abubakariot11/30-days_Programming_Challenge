#include <stdio.h>

#define DAYS_IN_WEEK 7

int main() {
    // Array of strings representing the days of the week
    const char *days[DAYS_IN_WEEK] = {
        "Sunday",
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday"
    };

    // Display each day's name
    for (int i = 0; i < DAYS_IN_WEEK; i++) {
        printf("Day %d: %s\n", i + 1, days[i]);
    }

    return 0;
}
