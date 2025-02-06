#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
  
    scanf("%c", &ch);

    if (isupper(ch)) {
        printf("Uppercase ",ch);
    } else if (islower(ch)) {
        printf("Lowercase",ch);
    } else {
        printf("Not an alphabet",ch);
    }
    return 0;
}