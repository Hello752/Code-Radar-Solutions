#include <stdio.h>
#include <math.h> // For sqrt()

int isprime(int num) {
    if (num < 2) return 0;  // 0 and 1 are not prime
    if (num == 2) return 1; // 2 is the only even prime number
    if (num % 2 == 0) return 0; // Even numbers > 2 are not prime

    for (int i = 3; i <= sqrt(num); i += 2) { // Check only odd numbers up to sqrt(num)
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    printf("Enter a number: "); // Optional: Improves user interaction
    scanf("%d", &n);
    printf("%d is %s\n", n, isprime(n) ? "a prime number" : "not a prime number");
    return 0;
}
