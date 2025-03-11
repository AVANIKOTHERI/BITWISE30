#include <stdio.h>

// Function to check if a number is a binary palindrome
int isBinaryPalindrome(unsigned int num) {
    unsigned int rev = 0, original = num;
    int bits = 0;

    // Count number of bits
    while (num > 0) {
        bits++;
        num >>= 1;
    }

    num = original; // Restore num

    // Reverse bits of the number
    for (int i = 0; i < bits; i++) {
        rev = (rev << 1) | (num & 1); // Extract LSB and add to rev
        num >>= 1; // Shift number right
    }

    // If the reversed number matches the original, it's a binary palindrome
    return rev == original;
}

int main() {
    unsigned int num = 9; // Binary: 1001 (Palindrome)
    if (isBinaryPalindrome(num))
        printf("%u is a binary palindrome.\n", num);
    else
        printf("%u is NOT a binary palindrome.\n", num);

    return 0;
}
