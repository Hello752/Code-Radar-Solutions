#include <stdio.h>

int main() {
    int num, n;

    // Input the number and the bit position
    scanf("%d %d", &num,&n);
    int mask=1<<n;
    

    // Check if the nth bit is set or not
    if (num & mask) {
        printf("%d", 1);
    } else {
        printf("%d", 0);
    }

    return 0;
}
