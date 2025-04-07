#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str);  // Take string input

    int len = strlen(str);
    int isPalindrome = 1;

    // Check if string is a palindrome
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("Yes");
    else
        printf("No");

    return 0;
}
