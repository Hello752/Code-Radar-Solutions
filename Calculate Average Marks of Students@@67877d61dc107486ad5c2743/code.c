#include <stdio.h>

struct Student {
    int rollnumber;
    char name[100];
    float marks;
};

int main() {
    int n;
    float sum = 0.0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];  // Now n is initialized

    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].rollnumber, students[i].name, &students[i].marks);
        sum += students[i].marks;  // This should be inside the loop
    }

    float average = sum / n;
    printf("Average Marks: %.2f\n", average);

    return 0;
}
