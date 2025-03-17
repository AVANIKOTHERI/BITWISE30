#include <stdio.h>
#include <stdint.h>

int main() {
    uint32_t data = 0x12345678;  // 32-bit data
    uint16_t high, low;

    // Store 32-bit data into two 16-bit variables
    low = data & 0xFFFF;        // Lower 16 bits
    high = (data >> 16) & 0xFFFF; // Upper 16 bits

    // Simulate memory storage in a 16-bit MCU
    uint16_t memory[2];  // Simulating two 16-bit memory locations
    memory[0] = low;  // Store LSB
    memory[1] = high; // Store MSB

    // Retrieve 32-bit data from two 16-bit variables
    uint32_t retrieved_data = ((uint32_t)memory[1] << 16) | memory[0];

    // Print results
    printf("Original Data: 0x%X\n", data);
    printf("Stored in Memory: High = 0x%X, Low = 0x%X\n", memory[1], memory[0]);
    printf("Retrieved Data: 0x%X\n", retrieved_data);

    return 0;
}
