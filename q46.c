// Write a program to print the following pattern:
//*****
//*****
//*****
//*****
//*****
#include <stdio.h>

int main() {
    int rows = 5, cols = 5;

    for (int i = 1; i <= rows; i++) {      // loop for rows
        for (int j = 1; j <= cols; j++) {  // loop for columns
            printf("*");
        }
        printf("\n");  // new line after each row
    }

    return 0;
}
