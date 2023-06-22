#include<stdio.h>

typedef struct {
    float real;
    float imag;
} Complex;

Complex readComplex();
void writeComplex(Complex num);
Complex addComplex(Complex num1, Complex num2);
Complex multiplyComplex(Complex num1, Complex num2);

int main() {
    Complex num1, num2, sum, product;

    printf("Enter the first complex number:\n");
    num1 = readComplex();

    printf("Enter the second complex number:\n");
    num2 = readComplex();

    printf("\nComplex number 1: ");
    writeComplex(num1);

    printf("Complex number 2: ");
    writeComplex(num2);

    sum = addComplex(num1, num2);
    printf("\nSum of the complex numbers: ");
    writeComplex(sum);

    product = multiplyComplex(num1, num2);
    printf("Product of the complex numbers: ");
    writeComplex(product);

    return 0;
}

Complex readComplex() {
    Complex num;
    printf("Enter the real part: ");
    scanf("%f", &num.real);
    printf("Enter the imaginary part: ");
    scanf("%f", &num.imag);
    return num;
}

void writeComplex(Complex num) {
    printf("%.2f + %.2fi\n", num.real, num.imag);
}

Complex addComplex(Complex num1, Complex num2) {
    Complex result;
    result.real = num1.real + num2.real;
    result.imag = num1.imag + num2.imag;
    return result;
}

Complex multiplyComplex(Complex num1, Complex num2) {
    Complex result;
    result.real = (num1.real * num2.real) - (num1.imag * num2.imag);
    result.imag = (num1.real * num2.imag) + (num1.imag * num2.real);
    return result;
}
