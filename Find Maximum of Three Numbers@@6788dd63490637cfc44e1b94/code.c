#include <stdio.h>

int main() {
    float side1, side2, side3;
    scanf("%f %f %f", &side1, &side2, &side3);

    if (side1 > side2 && side1 > side3) {
        printf("%.0f", side1);
    } 
    else if (side2 > side1 && side2 > side3) {
        printf("%.0f", side2);
    } 
    else {
        printf("%.0f", side3);
    }

    return 0;
}
