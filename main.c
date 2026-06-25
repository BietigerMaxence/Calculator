#include <math.h>
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

int modulo(float a, float b) {
    return (int) a % (int) b;
}

double power(double a, double b) {
    return pow(a, b);
}

int main() {
    float num1, num2;
    char operator;
    char quit = 'n';
    while (quit != 'y') {

        printf("Choose two numbers:\n");
        if (scanf(" %f", &num1) != 1 || scanf(" %f", &num2) != 1) { // NOLINT(cert-err34-c)
            printf("Invalid numbers\n");
            int c;
            while ((c = getchar()) != '\n' && c != EOF) { }
            continue;
        }

        printf("Choose one operator (+ * - / %% ^):\n");
        if (scanf(" %c", &operator) != 1 || (operator != '+' && operator != '-' && operator != '*' && operator != '/' && operator != '%' && operator != '^')) {
            printf("Invalid operator\n");
            int c;
            while ((c = getchar()) != '\n' && c != EOF) { }
            continue;
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
                if (num2 == 0) {
                    printf("Division by zero\n");
                    break;
                }
                printf("%.1f\n", division(num1, num2));
                break;
            case '%':
                if (num2 == 0) {
                    printf("Division by zero\n");
                    break;
                }
                printf("%d\n", modulo(num1, num2));
                break;
            case '^':
                printf("%.1f\n", power(num1, num2));
                break;
            default:
                printf("Invalid operator\n");
        }
        printf("Quitter ? (y/n) : ");
        if (scanf(" %c", &quit) != 1) {
            printf("Invalid input\n");
            return 1;
        }
    }
    return 0;
}