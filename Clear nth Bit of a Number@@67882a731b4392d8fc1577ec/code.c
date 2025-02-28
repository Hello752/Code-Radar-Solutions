#include <stdio.h>

// Function to clear the nth bit of a number
int clearNthBit(int num, int n) {
    return num & ~(1 << n);
}

int main() {
    int num, n;

    // Taking input from user
   
    scanf("%d", &num);
    scanf("%d", &n);

    // Checking if the bit position is valid
    if (n < 0 || n >= (sizeof(int) * 8)) {
        printf("Invalid bit position!\n");
        return 1;
    }

    int result = clearNthBit(num, n);
    printf("%d", n, result);

    return 0;
}
