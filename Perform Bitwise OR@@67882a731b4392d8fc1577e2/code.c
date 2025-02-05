#include <stdio.h>

int main() {
    int num1, num2, result;

    // Input two integers

    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Perform bitwise OR operation
    result = num1 | num2;

    // Print the result
    printf(" %d = %d\n", num1, num2, result);

    return 0;
}
