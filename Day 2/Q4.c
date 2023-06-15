#include <stdio.h>

// Function to count the number of set bits in a number
int countSetBits(unsigned int num) {
    int count = 0;
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

// Function to calculate the total number of set bits in an array
int getTotalSetBits(unsigned int arr[], int size) {
    int totalBits = 0;
    for (int i = 0; i < size; i++) {
        totalBits += countSetBits(arr[i]);
    }
    return totalBits;
}

int main() {
    unsigned int arr[] = {0x1, 0xF4, 0x10001};
    int size = sizeof(arr) / sizeof(arr[0]);

    int totalSetBits = getTotalSetBits(arr, size);

    printf("The total number of set bits in the array is: %d\n", totalSetBits);

    return 0;
}
