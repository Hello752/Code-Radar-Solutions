#include <stdio.h>
#include <math.h>

// Function prototype
int isPrime(int num);

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // Corrected: using 'n' here, not 'num'
    printf("%d is %s\n", n, isPrime(n) ? "a prime number" : "not a prime number");

    return 0;
}

// Function to check if a number is prime
int isPrime(int num) {
    if (num < 2) return 0;
    if (num == 2) return 1;
    if (num % 2 == 0) return 0;

    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}
