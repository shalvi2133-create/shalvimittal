// Write a program to find the product of odd digits of a number.
#include <stdio.h>

int main() {
    int num, remainder;
    long long product = 1;  

    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;
    int hasOdd = 0; 

    while (temp != 0) {
        remainder = temp % 10;
        if (remainder % 2 != 0) {  
            product *= remainder;
            hasOdd = 1;
        }
        temp /= 10;
    }

    if (!hasOdd) {
        product = 1; 
    }

    printf("Product of odd digits = %lld", product);

    return 0;
}
