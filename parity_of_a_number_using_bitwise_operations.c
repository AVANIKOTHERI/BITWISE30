#include <stdio.h>

// Function to find parity using XOR
int findParity(unsigned int num) {
    int parity = 0;  // Stores parity result

    while (num) {
        parity ^= (num & 1);  // XOR with last bit
        num >>= 1;  // Right shift by 1
    }

    return parity;  // 1 -> Odd parity, 0 -> Even parity
}

int main() {
    unsigned int num;
    printf("Enter a number: ");
    scanf("%u", &num);

    printf("Parity of %u is %s\n", num, findParity(num) ? "Odd" : "Even");
    return 0;
}
//---------------------------
#include <stdio.h>

// Function to check parity using num & (num - 1) and XOR
int checkParity(int num) {
    int parity = 0;  // Start with even parity (0)

    while (num) {
        parity ^= 1;     // Toggle parity (Odd <-> Even)
        num &= (num - 1); // Remove the lowest set bit
    }

    return parity;  // 1 for Odd Parity, 0 for Even Parity
}

// Driver Code
int main() {
    int numbers[] = {7, 8, 15, 1000, 255};  // Test cases
    int n = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < n; i++) {
        int num = numbers[i];
        printf("Number: %d -> %s Parity\n", num, checkParity(num) ? "Odd" : "Even");
    }

    return 0;
}

