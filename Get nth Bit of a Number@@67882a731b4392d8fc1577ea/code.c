#include <stdio.h>

int main() {
    int num, n;

    // Input the number and the bit position
    scanf("%d %d", &num,&n);
    

    // Check if the nth bit is set or not
    if (num & (1 << n)) {
        printf("%d", 1);
    } else {
        printf("%d", 0);
    }

    return 0;
}
