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

    switch (operation) {
        case '+':
            printf("The sum of %d and %d is %d\n", a, b, a + b);
            break;
        case '-':
            printf("The difference of %d and %d is %d\n", a, b, a - b);
            break;
        case '*':
            printf("The product of %d and %d is %d\n", a, b, a * b);
            break;
        case '/':
            if (b != 0) {
                printf("The division of %d and %d is %d\n", a, b, a / b);
            } else {
                printf("Error: cannot divide by zero\n");
            }
            break;
        default:
            printf("Invalid operation\n");
    }

    return 0;
}