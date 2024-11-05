#include <stdio.h>

int main() {
    int a = 10;  // Example value for R0
    int b = 2;   // Example value for R1
    int count = 0;  // Corresponds to R2

    while (b < a) {   // Compares R1 and R0
        count++;     // Increment count
        b += b;      // Double the value of R1
    }

    a = count; // Store R2 in R0

    printf("Output: %d\n", a); // Output the result
    return 0;
}
