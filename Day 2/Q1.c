#include <stdio.h>
#include <stdint.h>

void printExponent(double x) {
    uint64_t* bits = (uint64_t*)&x;

    // Extract the exponent bits
    uint64_t exponent = (*bits >> 52) & 0x7FF;

    // Convert exponent to hexadecimal and binary format
    printf("Hexadecimal: 0x%lX\n", exponent);
    printf("Binary: 0b");
    for (int i = 10; i >= 0; i--) {
        printf("%d", (exponent >> i) & 1);
    }
    printf("\n");
}

int main() {
    double x = 0.7;
    printExponent(x);

    return 0;
}
