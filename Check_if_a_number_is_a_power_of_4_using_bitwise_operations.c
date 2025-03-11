#include <stdio.h>

// Function to check if a number is a power of 2
int isPowerOf2(unsigned int num) {
    return (num > 0) && ((num & (num - 1)) == 0);
}

// Function to check if a number is a power of 4
int isPowerOf4(unsigned int num) {
    return isPowerOf2(num) && ((num & 0xAAAAAAAA) == 0);
}

// Function to check if a number is a power of 8
int isPowerOf8(unsigned int num) {
    return isPowerOf2(num) && ((num & 0xB6DB6DB6) == 0);
}

// Function to check if a number is a power of 16
int isPowerOf16(unsigned int num) {
    return isPowerOf2(num) && ((num & 0xEEEEEEEE) == 0);
}

int main() {
    unsigned int num;

    // User input
    printf("Enter a number: ");
    scanf("%u", &num);

    // Check power of 2
    if (isPowerOf2(num))
        printf("%u is a power of 2.\n", num);
    else
        printf("%u is NOT a power of 2.\n", num);

    // Check power of 4
    if (isPowerOf4(num))
        printf("%u is a power of 4.\n", num);
    else
        printf("%u is NOT a power of 4.\n", num);

    // Check power of 8
    if (isPowerOf8(num))
        printf("%u is a power of 8.\n", num);
    else
        printf("%u is NOT a power of 8.\n", num);

    // Check power of 16
    if (isPowerOf16(num))
        printf("%u is a power of 16.\n", num);
    else
        printf("%u is NOT a power of 16.\n", num);

    return 0;
}
