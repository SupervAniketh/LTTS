#include <stdio.h>

int bit_operations(int num, int oper_type) {
    if (oper_type == 1) {
        // Set 1st bit
        num |= 1;
    } else if (oper_type == 2) {
        // Clear 31st bit
        num &= ~(1 << 31);
    } else if (oper_type == 3) {
        // Toggle 16th bit
        num ^= (1 << 16);
    }

    return num;
}

int main() {
    int num = 123;  // Example input
    int oper_type = 2;  // Example operation type

    int result = bit_operations(num, oper_type);

    printf("Result: %d\n", result);

    return 0;
}
