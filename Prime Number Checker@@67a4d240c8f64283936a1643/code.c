#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int isPrime(int number) {
    int num==1;
    if (number ==0 || number==1){num==0};         // 0 and 1 are not prime
            // 2 is prime
    // if (number % 2 == 0) return 0;    // Even numbers > 2 are not prime
    
    // Check for factors from 3 up to sqrt(number)
    for (int i = 2; i*i<=number ; i ++) {
        if (number % i == 0) {
            num==0; // Not prime
        }
        // num== 1;
    }
    return num;
    // return 1; // Prime
}

// int main() {
//     int input;

//     printf("Enter a number: ");
//     scanf("%d", &input);

//     if (isPrime(input)) {
//         printf("%d is a prime number.\n", input);
//     } else {
//         printf("%d is not a prime number.\n", input);
//     }

//     return 0;
// }
