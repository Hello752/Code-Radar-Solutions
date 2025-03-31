#include <stdio.h>
#include <stdlib.h> // Include for sqrt()

int isprime(int num) {
    if (num < 2) return 0;  // 0 and 1 are not prime
    if (num == 2) return 1; // 2 is the only even prime number
    if (num % 2 == 0) return 0; // Even numbers > 2 are not prime

    for (int i = 3; i * i <= num; i += 2) { // Check only odd numbers up to sqrt(num)
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", isprime(n));
    return 0;
}
