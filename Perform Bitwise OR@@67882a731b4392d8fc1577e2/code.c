Loading Code...nclude <stdio.h>
#include <stdio.h>
int main() {
    int a, b, result;

    // Input two integers
    printf("Enter two space-separated integers: ");
    scanf("%d %d", &a, &b);

    // Perform bitwise OR operation
    result = a | b;

    // Output the result
    printf("The result of the bitwise OR operation is: %d\n", result);

    return 0;
}
