#include <stdio.h>

// Function to clear the nth bit of a number
int clearNthBit(int num, int n) {
    return num & ~(1 << n);
}

int main() {
    int num, n;

    // Taking input from user
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the bit position to clear (0-based index): ");
    scanf("%d", &n);

    // Checking if the bit position is valid
    if (n < 0 || n >= (sizeof(int) * 8)) {
        printf("Invalid bit position!\n");
        return 1;
    }

    int result = clearNthBit(num, n);
    printf("Number after clearing %dth bit: %d\n", n, result);

    return 0;
}
