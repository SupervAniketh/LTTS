#include <stdio.h>

// Structure to represent a time period
struct TimePeriod {
    int hours;
    int minutes;
    int seconds;
};


struct TimePeriod getTimeDifference(struct TimePeriod t1, struct TimePeriod t2) {
    struct TimePeriod difference;

    
    int totalSeconds1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    int totalSeconds2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;

   
    int diffSeconds = totalSeconds2 - totalSeconds1;
    if (diffSeconds < 0)
        diffSeconds = -diffSeconds;

    difference.hours = diffSeconds / 3600;
    difference.minutes = (diffSeconds % 3600) / 60;
    difference.seconds = (diffSeconds % 3600) % 60;

    return difference;
}

int main() {
    struct TimePeriod t1, t2, difference;

    printf("Enter the first time period (hours minutes seconds): ");
    scanf("%d %d %d", &t1.hours, &t1.minutes, &t1.seconds);

    printf("Enter the second time period (hours minutes seconds): ");
    scanf("%d %d %d", &t2.hours, &t2.minutes, &t2.seconds);

    difference = getTimeDifference(t1, t2);

    printf("\nDifference: %d hours, %d minutes, %d seconds\n",
           difference.hours, difference.minutes, difference.seconds);

    return 0;
}
