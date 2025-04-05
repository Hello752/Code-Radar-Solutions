#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n == 0) {
        printf("0");
        return 0;
    }

    int binary_num = 0, place = 1;

    // Convert decimal to binary
    while (n > 0) {
        int rem = n % 2;
        binary_num += rem * place;
        n /= 2;
        place *= 10;
    }

    printf("%d", binary_num);
    return 0;
}
