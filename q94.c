// Find the longest word in a sentence.
#include <stdio.h>

int main() {
    char str[200];
    int maxLen = 0, len = 0, start = 0, maxStart = 0;

    scanf("%[^\n]", str); 

    for (int i = 0; ; i++) {
        if (str[i] != ' ' && str[i] != '\0') {
            len++;
        } else {
            if (len > maxLen) {
                maxLen = len;
                maxStart = start;
            }
            len = 0;
            start = i + 1;
        }

        if (str[i] == '\0')
            break;
    }

    for (int i = 0; i < maxLen; i++)
        printf("%c", str[maxStart + i]);

    return 0;
}
