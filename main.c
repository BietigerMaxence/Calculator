#include <stdio.h>

float addition(float a, float b) {
    return a + b;
}

float subtraction(float a, float b) {
    return a - b;
}

float multiplication(float a, float b) {
    return a * b;
}

float division(float a, float b) {
    return a / b;
}

int main() {
    float num1, num2;
    char operator;
    printf("Choose two numbers:\n");
    if (scanf(" %f", &num1) != 1 || scanf(" %f", &num2) != 1) {
        printf("Invalid numbers");
        return 1;
    }

    printf("Choose one operator (+ * - /):\n");
    if (scanf(" %c", &operator) != 1 || (operator != '+' && operator != '-' && operator != '*' && operator != '/')) {
        printf("Invalid operator");
        return 1;
    }

    switch (operator) {
        case '+':
            printf("%.1f\n", addition(num1, num2));
            break;
        case '-':
            printf("%.1f\n", subtraction(num1, num2));
            break;
        case '*':
            printf("%.1f\n", multiplication(num1, num2));
            break;
        case '/':
            printf("%.1f\n", division(num1, num2));
            break;
    }
}