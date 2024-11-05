#include <stdio.h>

int main() {
    int a = 10;  // Example value for R0
    int b = 2;   // Example value for R1
    int count = 0;

    while (b < a) {
        count++;     // Increment count
        b += b;      // Double the value of b
    }

    a = count; // Store count in a (R0)

    printf("Output: %d\n", a); // Output the result
    return 0;
}
