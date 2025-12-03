// Count characters in a string without using built-in length functions.
#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    scanf("%s", str); // reads a word (no spaces)

    while (str[count] != '\0') {
        count++;
    }

    printf("%d", count);

    return 0;
}
