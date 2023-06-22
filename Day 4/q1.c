#include <stdio.h>

// Define the structure for the box
struct Box {
    double length;
    double width;
    double height;
};

// Function to calculate the volume of the box
double calculateVolume(struct Box* box) {
    return box->length * box->width * box->height;
}

// Function to calculate the total surface area of the box
double calculateSurfaceArea(struct Box* box) {
    return 2 * (box->length * box->width + box->length * box->height + box->width * box->height);
}

int main() {
    // Create an instance of the box structure
    struct Box myBox;

    // Assign values to the box dimensions
    myBox.length = 4.5;
    myBox.width = 2.3;
    myBox.height = 6.1;

    // Create a pointer to the box structure
    struct Box* boxPtr = &myBox;

    // Calculate the volume and total surface area using pointers and dot operator
    double volume = calculateVolume(&myBox);
    double surfaceArea = calculateSurfaceArea(&myBox);

    // Calculate the volume and total surface area using arrow operator
    double volumePtr = calculateVolume(boxPtr);
    double surfaceAreaPtr = calculateSurfaceArea(boxPtr);

    // Display the results
    printf("Volume: %.2f\n", volume);
    printf("Total Surface Area: %.2f\n", surfaceArea);
    printf("Volume (using pointer): %.2f\n", volumePtr);
    printf("Total Surface Area (using pointer): %.2f\n", surfaceAreaPtr);

    return 0;
}
