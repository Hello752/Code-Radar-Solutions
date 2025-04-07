#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int isPrime(int number) {
    if (number < 2) return 0;         // 0 and 1 are not prime
    if (number == 2) return 1;        // 2 is prime
    if (number % 2 == 0) return 0;    // Even numbers > 2 are not prime

    // Check for factors from 3 up to sqrt(number)
    for (int i = 3; i <= sqrt(number); i += 2) {
        if (number % i == 0) {
            return 0; // Not prime
        }
    }

    return 1; // Prime
}

int main() {
    int input;

    printf("Enter a number: ");
    scanf("%d", &input);

    if (isPrime(input)) {
        printf("%d is a prime number.\n", input);
    } else {
        printf("%d is not a prime number.\n", input);
    }

    return 0;
}
