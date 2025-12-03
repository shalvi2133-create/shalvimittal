// Check if a string is a palindrome.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    
    scanf("%s", str); // read string without spaces

    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    int palindrome = 1; 

    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            palindrome = 0;
            break;
        }
    }

    if (palindrome)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}

