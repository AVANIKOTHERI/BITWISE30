#include <stdio.h>

int multiply(int a, int b) {
    int result = 0;

    while (b != 0) {  
        if (b & 1)  // If the rightmost bit of b is set
            result = result + a;  // Add a to result (using bitwise addition if needed)

        a <<= 1;  // Double a (equivalent to a * 2)
        b >>= 1;  // Shift b right (process next bit)
    }

    return result;
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Product of %d and %d is: %d\n", num1, num2, multiply(num1, num2));
    return 0;
}
