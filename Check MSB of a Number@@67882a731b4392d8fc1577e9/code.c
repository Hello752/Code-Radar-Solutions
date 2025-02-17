#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    // Calculate the MSB mask for 32-bit integer
      int mask = 1 <<31;        //1000000000000000000000000000

    if (num & mask) {
        printf("Set");
    } else {
        printf("Not Set");
    }

    return 0;
}
