// Write a program to implement a basic calculator using switch-case for +, -, *, /, %#include <stdio.h>

int main() {
    int num1, num2, result;
    char operator;

    printf("Enter two numbers and an operator (+, -, *, /, %): ");
    scanf("%d %d %c", &num1, &num2, &operator);

    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("%d", result);
            break;
        case '-':
            result = num1 - num2;
            printf("%d", result);
            break;
        case '*':
            result = num1 * num2;
            printf("%d", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%d", result);
            } else {
                printf("Division by zero is not allowed");
            }
            break;
        case '%':
            if (num2 != 0) {
                result = num1 % num2;
                printf("%d", result);
            } else {
                printf("Division by zero is not allowed");
            }
            break;
        default:
            printf("Invalid operator");
    }

    return 0;
}
