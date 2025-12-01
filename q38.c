// Write a program to find the sum of digits of a number.
#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;  

    while (temp != 0) {
        remainder = temp % 10; 
        sum += remainder;      
        temp = temp / 10;      
    }

    printf("Sum of digits of %d = %d", num, sum);

    return 0;
}
