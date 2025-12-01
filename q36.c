// Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>

int main() {
    int a, b, tempA, tempB, hcf;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    tempA = a;
    tempB = b;

    while (tempB != 0) {
        int remainder = tempA % tempB;
        tempA = tempB;
        tempB = remainder;
    }

    hcf = tempA;

    printf("HCF of %d and %d is %d", a, b, hcf);

    return 0;
}
