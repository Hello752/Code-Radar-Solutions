#include <stdio.h>
#include <math.h>

// Function prototype (declaration)
int isprime(int num);

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d is %s\n", n, isprime(n) ? "a prime number" : "not a prime number");
    return 0;
}

int isprime(int num) {
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
