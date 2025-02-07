#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    // Calculate the MSB mask for 32-bit integer
    int msb_mask = 1 << 31;

    if (num & msb_mask) {
        printf("The Most Significant Bit (MSB) is set (1).\n");
    } else {
        printf("The Most Significant Bit (MSB) is not set (0).\n");
    }

    return 0;
}
