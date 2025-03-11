#include <stdio.h>

unsigned int swapOddEvenBits(unsigned int num) {
    // Masks for even and odd bits
    unsigned int evenBits = num & 0xAAAAAAAA; // Mask odd-positioned bits
    unsigned int oddBits = num & 0x55555555;  // Mask even-positioned bits

    // Shift even bits right, odd bits left
    evenBits >>= 1;
    oddBits <<= 1;

    // Combine swapped bits
    return (evenBits | oddBits);
}

int main() {
    unsigned int num = 23; // Binary: 0001 0111
    unsigned int swapped = swapOddEvenBits(num);

    printf("Original: %u (Binary: 0001 0111)\n", num);
    printf("Swapped: %u\n", swapped);
    return 0;
}
