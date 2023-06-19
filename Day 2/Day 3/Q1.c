#include <stdio.h>

void print_numbers(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf("%d", i);
    }
   
}

void print_spaces(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf(" ");
    }
}

int main() {
    int n = 5;
    int i;
    for (i = n; i >= 1; i--) {
        print_numbers(i);
        if (i > 1) {
            print_spaces(2 * (n - i) - 1);
            print_numbers(i);
        }
        printf("\n");
    }
    return 0;
}
