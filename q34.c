// Write a program to check if a number is prime.
#include <stdio.h>

int main() {
    int num, isPrime = 1;  // assume prime

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0;  // 0 and 1 are not prime
    } else {
        for (int i = 2; i * i <= num; i++) { // check up to sqrt(num)
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime) {
        printf("Prime");
    } else {
        printf("Not prime");
    }

    return 0;
}
