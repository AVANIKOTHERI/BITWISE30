#include <stdio.h>

int add(int a, int b) {
    while (b != 0) {
        int carry = (a & b) << 1;  // Compute carry
        a = a ^ b;  // Sum without carry
        b = carry;  // Carry is added in next iteration
    }
    return a;
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Sum of %d and %d is: %d\n", num1, num2, add(num1, num2));
    return 0;
}
