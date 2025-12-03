// Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i, lastSpace = -1;

    // Read full line including spaces
    fgets(name, sizeof(name), stdin);

    // Remove newline character if present
    int len = strlen(name);
    if (name[len - 1] == '\n') {
        name[len - 1] = '\0';
    }

    // Find last space position
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ')
            lastSpace = i;
    }

    // Print initials of first and middle names
    for (i = 0; i <= lastSpace; i++) {
        if (i == 0) {
            printf("%c.", name[i]); // first initial
        } else if (name[i] == ' ' && name[i + 1] != '\0') {
            printf("%c.", name[i + 1]); // middle initials
        }
    }

    // Print surname
    if (lastSpace != -1) {
        printf(" %s", &name[lastSpace + 1]);
    }

    return 0;
}
