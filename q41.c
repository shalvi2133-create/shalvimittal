// Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main() {
    int num, first, last, digits = 0, temp, newNum;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    last = temp % 10; // last digit

    // count number of digits
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    temp = num;
    first = temp;
    // get first digit
    for (int i = 1; i < digits; i++) {
        first /= 10;
    }

    if (digits == 1) {
        newNum = num; // single-digit number remains the same
    } else {
        // remove first and last digits
        temp = num % (int)pow(10, digits - 1); // remove first digit
        temp /= 10;                             // remove last digit
        // swap first and last digits
        newNum = last * (int)pow(10, digits - 1) + temp * 10 + first;
    }

    printf("Number after swapping first and last digits: %d", newNum);

    return 0;
}
