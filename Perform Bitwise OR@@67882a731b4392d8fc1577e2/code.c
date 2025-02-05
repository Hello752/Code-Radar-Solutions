
#include <stdio.h>
int main() {
    int a, b, result;

    // Input two integers
    printf("Enter two space-separated integers: ");
    scanf("%d %d", &a, &b);

    // Perform bitwise OR operation
    result = a | b;

    // Output the result
    printf(" %d\n", result);

    return 0;
}
