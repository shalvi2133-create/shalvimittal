// Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, start;

    gets(str); 

    i = 0;
    while (str[i] != '\0') {
        start = i;
        
        while (str[i] != ' ' && str[i] != '\0') {
            i++;
        }
        
        for (int j = i - 1; j >= start; j--) {
            printf("%c", str[j]);
        }
        
        if (str[i] == ' ')
            printf(" ");
        if (str[i] != '\0')
            i++;
    }

    return 0;
}

