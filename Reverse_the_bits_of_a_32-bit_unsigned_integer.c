#include <stdio.h>

// Function to reverse the bits of a 32-bit unsigned integer
unsigned int reverseBits(unsigned int num) {
    unsigned int reversed = 0;  // Store the reversed number
    for (int i = 0; i < 32; i++) {
        reversed <<= 1;          // Shift left to make space for the next bit
        reversed |= (num & 1);   // Extract LSB (rightmost bit) and set in reversed
        num >>= 1;               // Shift original number right to process the next bit
    }
    return reversed;
}

int main() {
    unsigned int num = 43261596; // Example input (00000010100101000001111010011100)
    unsigned int result = reverseBits(num);

    printf("Reversed Bits: %u\n", result);
    return 0;
}
