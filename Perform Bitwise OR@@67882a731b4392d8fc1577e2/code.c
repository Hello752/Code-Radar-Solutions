#include <stdio.h>
int main() {
    int a;  // Binary: 0101
    int b;  // Binary: 0011
    int result = a & b;  // 0101 & 0011 = 0001
    printf("Bitwise AND: %d\n", result);  // Output: 1
    return 0;
}
