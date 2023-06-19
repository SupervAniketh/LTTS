#include <stdio.h>

int deleteDigit(int num) {
    int largest = 0;
    int divisor = 1;

    while (divisor <= 1000) {
        int remaining = (num / (divisor * 10)) * divisor + (num % divisor);

        if (remaining > largest) {
            largest = remaining;
        }

        divisor *= 10;
    }

    return largest;
}

int main() {
    int number;

    printf("Enter a 4-digit number: ");
    scanf("%d", &number);

    int largestNumber = deleteDigit(number);

    printf("The largest number by deleting a single digit: %d\n", largestNumber);

    return 0;
}
