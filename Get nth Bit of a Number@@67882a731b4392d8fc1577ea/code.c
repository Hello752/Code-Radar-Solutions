#include <stdio.h>

int main() {
    int num, n;

    // Input the number and the bit position
    scanf("%d", &num);
    scanf("%d", &n);

    // Check if the nth bit is set or not
    if (num & (1 << n)) {
        printf("%d", n);
    } else {
        printf(" %d", n);
    }

    return 0;
}
