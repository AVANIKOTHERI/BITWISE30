#include <stdio.h>

// Function to multiply by 7 using bitwise shift and subtraction
int multiplyBy7(int num) {
    return (num << 3) - num;  // (num * 8) - num
}

int main() {
    int num;
    
    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Multiply by 7 using bitwise operations
    int result = multiplyBy7(num);

    // Print result
    printf("%d × 7 = %d\n", num, result);

    return 0;
}
//================================================================
//Another method by shifting\
#include <stdio.h>

// Function to multiply by 7 using bitwise shift (4 + 2 + 1)
int multiplyBy7(int num) {
    return (num << 2) + (num << 1) + num;  // (num * 4) + (num * 2) + num
}

int main() {
    int num;
    
    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Multiply by 7 using bitwise operations
    int result = multiplyBy7(num);

    // Print result
    printf("%d × 7 = %d\n", num, result);

    return 0;
}
