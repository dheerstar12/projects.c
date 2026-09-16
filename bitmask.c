#include <stdio.h>

int main() {
    // Let's say we have an array of 3 things
    char items[3] = {'A', 'B', 'C'};
    int n = 3;
    
    // 1 << 3 is exactly 2^3 (which is 8)
    int total_combinations = 1 << n; 

    // Outer loop: Count from 0 to 7 (000 to 111 in binary)
    for (int mask = 0; mask < total_combinations; mask++) {
        
        printf("Mask %d (Binary): ", mask);
        
        // Inner loop: Check the bits of the current mask
        // We loop exactly 'n' times (3 times)
        for (int i = 0; i < n; i++) {
            
            // Does the mask have a '1' at the i-th position?
            // (1 << i) creates 001, then 010, then 100
            if (mask & (1 << i)) {
                printf("%c ", items[i]); // If yes, print the item!
            }
        }
        printf("\n");
    }
    
    return 0;
}