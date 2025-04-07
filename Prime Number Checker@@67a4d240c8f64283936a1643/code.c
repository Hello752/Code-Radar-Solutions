#include <stdio.h>
#include <math.h>

// Function prototype
int isprime(int num);

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d is %s\n", n, isprime(num) ? "a prime number" : "not a prime number");
    return 0;
}

// Function to check if a number is prime
int isprime(int num) {
    if (num < 2) return 0;        // 0 and 1 are not prime
    if (num == 2) return 1;       // 2 is prime
    if (num % 2 == 0) return 0;   // Even numbers greater than 2 are not prime

    // Check odd divisors up to square root of num
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}
