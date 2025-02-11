#include <stdio.h>
#include <math.h>  // Include math.h for sqrt function

int main() {
    int n, i, flag = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Handling edge cases
    if (n <= 1) {
        printf("Not Prime\n");
        return 0;
    }

    // Checking divisibility from 2 to sqrt(n)
    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }

    // Output result
    if (flag == 0)
        printf("Prime\n");
    else
        printf("Not Prime\n");

    return 0;
}
