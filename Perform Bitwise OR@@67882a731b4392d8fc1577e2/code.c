#include <stdio.h>

int main() {
    int num1, num2, result;

    // Input two integers
   
    scanf("%d", &num1);
   
    scanf("%d", &num2);

    // Perform bitwise OR operation
    result = num1 | num2;

    // Print the result
    printf("Result of %d | %d = %d\n", num1, num2, result);

    return 0;
}
