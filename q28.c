// Write a program to print the product of even numbers from 1 to n.#include <stdio.h>

int main() {
    int n;
    long long product = 1;  // Use long long for larger products

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2) {  // loop through even numbers
        product *= i;
    }

    printf("Product of even numbers from 1 to %d = %lld", n, product);

    return 0;
}
