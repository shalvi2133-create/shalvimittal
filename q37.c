// Write a program to find the LCM of two numbers.
#include <stdio.h>

int main() {
    int a, b, tempA, tempB, hcf, lcm;

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

    
    lcm = (a * b) / hcf;

    printf("LCM of %d and %d is %d", a, b, lcm);

    return 0;
}
