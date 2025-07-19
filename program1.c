#include <stdio.h>
#include <string.h>

struct Calculator {
    double a;
    double b;
    char operation[20];
};

double calculate(struct Calculator c) {
    if (strcmp(c.operation, "add") == 0) {
        return c.a + c.b;
    } else if (strcmp(c.operation, "subtract") == 0) {
        return c.a - c.b;
    } else if (strcmp(c.operation, "multiply") == 0) {
        return c.a * c.b;
    } else if (strcmp(c.operation, "divide") == 0) {
        if (c.b != 0) {
            return c.a / c.b;
        } else {
            printf("Cannot divide by zero.\n");
            return 0;
        }
    } else {
        printf("Invalid operation.\n");
        return 0;
    }
}

int main() {
    struct Calculator calc;

    printf("Enter first number: ");
    scanf("%lf", &calc.a);

    printf("Enter second number: ");
    scanf("%lf", &calc.b);

    printf("Enter operation (add, subtract, multiply, divide): ");
    scanf("%s", calc.operation);

    double result = calculate(calc);
    printf("Result: %.2lf\n", result);

    return 0;
}
