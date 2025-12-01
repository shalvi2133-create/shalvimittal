// Write a program to print the following pattern:
//1
//12
//123
//1234
//12345
#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {        // loop for rows
        for (int j = 1; j <= i; j++) {       // loop for numbers in each row
            printf("%d", j);
        }
        printf("\n");  // move to next row
    }

    return 0;
}
