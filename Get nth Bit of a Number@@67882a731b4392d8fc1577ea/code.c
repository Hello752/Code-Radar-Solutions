#include <stdio.h>

int main() {
    int num, n;

    // Input the number and the bit position
    scanf("%d", &num);
    scanf("%d", &n);

    // Check if the nth bit is set or not
    if (num & (1 << n)) {
        printf("The %dth bit is set (1).\n", n);
    } else {
        printf("The %dth bit is not set (0).\n", n);
    }

    return 0;
}
