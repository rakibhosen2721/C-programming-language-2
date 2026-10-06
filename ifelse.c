#include <stdio.h>

int main() {
    int a, b;
    char operation;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter the operation: ");
    scanf(" %c", &operation);

    if (operation == '+') {
        int sum = a + b;
        printf("The sum of %d and %d is %d\n", a, b, sum);
    } else if (operation == '-') {
        int difference = a - b;
        printf("The difference of %d and %d is %d\n", a, b, difference);
    } else if (operation == '*') {
        int product = a * b;
        printf("The product of %d and %d is %d\n", a, b, product);
    } else if (operation == '/') {
        if (b != 0) {
            int quotient = a / b;
            printf("The quotient of %d and %d is %d\n", a, b, quotient);
        } else {
            printf("Error: cannot divide by zero\n");
        }
    } else {
        printf("Invalid operation\n");
    }

    return 0;
}