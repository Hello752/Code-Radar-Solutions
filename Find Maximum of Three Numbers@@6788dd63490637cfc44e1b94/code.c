#include <stdio.h>

int main() {
    float side1, side2, side3;

    printf("Enter values for side1, side2, and side3:\n");
    scanf("%f %f %f", &side1, &side2, &side3);

    if (side1 > side2 && side1 > side3) {
        printf("Largest side: %f\n", side1);
    } 
    else if (side2 > side1 && side2 > side3) {
        printf("Largest side: %f\n", side2);
    } 
    else {
        printf("Largest side: %f\n", side3);
    }

    return 0;
}
