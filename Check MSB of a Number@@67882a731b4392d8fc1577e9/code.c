#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    // Calculate the MSB mask for 32-bit integer
    int msb_mask = (int) pow(2.0,31.0);
    

    if (num & msb_mask) {
        printf("Set");
    } else {
        printf("Not Set");
    }

    return 0;
}
