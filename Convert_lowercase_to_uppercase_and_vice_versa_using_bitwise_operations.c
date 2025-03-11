#include <stdio.h>

// Function to toggle case using XOR
char toggleCase(char ch) {
    return ch ^ 32;  // XOR with 32 flips case
}

// Function to convert a string by toggling case
void convertString(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            str[i] = toggleCase(str[i]);
        }
    }
}

int main() {
    char str[] = "Hello World!";
    
    printf("Original String: %s\n", str);
    convertString(str);
    printf("Toggled Case: %s\n", str);

    return 0;
}
