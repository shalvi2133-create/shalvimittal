// Print the initials of a name.
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];

    // Read full name including spaces
    scanf("%[^\n]", name);

    // Print first character as initial
    printf("%c.", name[0]);

    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i + 1] != '\0') {
            printf("%c.", name[i + 1]); // print character after space
        }
    }

    return 0;
}

