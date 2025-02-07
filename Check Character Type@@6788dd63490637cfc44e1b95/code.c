#include <stdio.h>

int main() {
    char n;
    scanf("%c", &n);

    // Check if n is a vowel
    if (n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u' ||
        n == 'A' || n == 'E' || n == 'I' || n == 'O' || n == 'U') {
        printf("Vowel");
    }
    // Check if n is a digit
    else if (n >= '0' && n <= '9') {
        printf("Digit");
    }
    // If not vowel or digit, it's a special character
    else {
        printf("Special character");
    }

    return 0;
}
