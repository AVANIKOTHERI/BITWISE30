#include <stdio.h>

// Function to count leading zeros
int countLeadingZeros(unsigned int num) {
    if (num == 0) return 32; // Special case: all bits are 0

    int count = 0;
    for (int i = 31; i >= 0; i--) { // Start from MSB (Most Significant Bit)
        if ((num >> i) & 1) break;  // Stop when first `1` is found
        count++;
    }
    return count;
}

// Function to count trailing zeros
int countTrailingZeros(unsigned int num) {
    if (num == 0) return 32; // Special case: all bits are 0

    int count = 0;
    while ((num & 1) == 0) { // Check if LSB (Least Significant Bit) is 0
        count++;
        num >>= 1; // Right shift to remove checked bit
    }
    return count;
}

int main() {
    unsigned int num;

    // Input from user
    printf("Enter a number: ");
    scanf("%u", &num);

    // Calculate leading and trailing zeros
    int leading = countLeadingZeros(num);
    int trailing = countTrailingZeros(num);

    // Print results
    printf("Binary representation of %u has:\n", num);
    printf("Leading Zeros: %d\n", leading);
    printf("Trailing Zeros: %d\n", trailing);

    return 0;
}
