// Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int i = 1, j = 1; i <= n; i++, j += 2) {
        int numerator = j;
        int denominator = j + 1;
        sum += (double)numerator / denominator;
    }

    printf("Approximate sum: %.1lf", sum);

    return 0;
}
