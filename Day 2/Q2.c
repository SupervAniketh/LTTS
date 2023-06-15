#include <stdio.h>
#include <string.h>

// Function to swap two values of any type
void swap(void* a, void* b, size_t size) {
    char buffer[size];
    memcpy(buffer, a, size);
    memcpy(a, b, size);
    memcpy(b, buffer, size);
}

int main() {
    int num1, num2;
    printf("Enter two integer values: ");
    scanf("%d %d", &num1, &num2);
    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);
    swap(&num1, &num2, sizeof(int));
    printf("After swap: num1 = %d, num2 = %d\n", num1, num2);

    char char1, char2;
    printf("Enter two characters: ");
    scanf(" %c %c", &char1, &char2);
    printf("Before swap: char1 = %c, char2 = %c\n", char1, char2);
    swap(&char1, &char2, sizeof(char));
    printf("After swap: char1 = %c, char2 = %c\n", char1, char2);

    float float1, float2;
    printf("Enter two float values: ");
    scanf("%f %f", &float1, &float2);
    printf("Before swap: float1 = %f, float2 = %f\n", float1, float2);
    swap(&float1, &float2, sizeof(float));
    printf("After swap: float1 = %f, float2 = %f\n", float1, float2);

    return 0;
}
