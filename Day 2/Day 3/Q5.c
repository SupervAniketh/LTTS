#include <stdio.h>

// Function to find the smallest digit in a number
int findSmallestDigit(int num) {
    int smallest = 9; 
    
    while (num > 0) {
        int digit = num % 10;  
        
        if (digit < smallest) {
            smallest = digit;  
        }
        
        num /= 10;  
    }
    
    return smallest;
}

// Function to find the largest digit in a number
int findLargestDigit(int num) {
    int largest = 0;  // Initialize largest digit to minimum possible value
    
    while (num > 0) {
        int digit = num % 10;  // Extract the last digit
        
        if (digit > largest) {
            largest = digit;  // Update largest digit if a larger one is found
        }
        
        num /= 10;  // Remove the last digit
    }
    
    return largest;
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the %d numbers: ", n);
    
    int smallest = 9;  // Initialize smallest digit to maximum possible value
    int largest = 0;   // Initialize largest digit to minimum possible value
    
    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        
        int smallestDigit = findSmallestDigit(num);
        int largestDigit = findLargestDigit(num);
        
        if (smallestDigit < smallest) {
            smallest = smallestDigit;  // Update smallest digit if a smaller one is found
        }
        
        if (largestDigit > largest) {
            largest = largestDigit;  // Update largest digit if a larger one is found
        }
    }
    
    printf("Smallest digit: %d\n", smallest);
    printf("Largest digit: %d\n", largest);
    
    return 0;
}
