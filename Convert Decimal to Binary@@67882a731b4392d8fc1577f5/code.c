#include <stdio.h>

void convertToBinary(int n) {
    if (n == 0) {
        printf("0");
        return;
    }

    int binary[32]; // To store binary digits
    int index = 0;

    // Convert to binary and store in array
    while (n > 0) {
        binary[index] = n % 2;
        n = n / 2;
        index++;
    }

    // Print the binary representation in reverse order
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    convertToBinary(n);
    return 0;
}
