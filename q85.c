// Reverse a string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    
    scanf("%s", str); // read string without spaces

    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}

