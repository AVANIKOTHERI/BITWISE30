#include <stdio.h>

// Function to find the next power of 2 greater than or equal to n
unsigned int nextPowerOf2(unsigned int n) {
    // If n is already a power of 2, return n itself
    if (n == 0)
        return 1;
    
    n--; // Decrement n to handle exact powers of 2 correctly
    
    // Set all bits to the right of the leftmost 1-bit
    n |= n >> 1;
    n |= n >> 2;
    n |= n >> 4;
    n |= n >> 8;
    n |= n >> 16; // Works up to 32-bit numbers

    return n + 1; // Next power of 2
}

// Driver code
int main() {
    unsigned int num = 19;
    printf("Next power of 2 greater than or equal to %u is %u\n", num, nextPowerOf2(num));

    return 0;
}
