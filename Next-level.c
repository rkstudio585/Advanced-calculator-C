#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function prototypes
void printMenu();
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
double exponentiate(double base, double exp);
double squareRoot(double a);
double logarithm(double a);
double sine(double a);
double cosine(double a);
double tangent(double a);
double factorial(int n);

int main() {
    int choice;
    double num1, num2, result;
    int intNum;

    while (1) {
        printMenu();
        printf("Enter your choice (1-12): ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a number.\n");
            while(getchar() != '\n'); // Clear input buffer
            continue;
        }

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = add(num1, num2);
                printf("Result: %.2lf\n", result);
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = subtract(num1, num2);
                printf("Result: %.2lf\n", result);
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = multiply(num1, num2);
                printf("Result: %.2lf\n", result);
                break;
            case 4:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = divide(num1, num2);
                if (num2 != 0) {
                    printf("Result: %.2lf\n", result);
                }
                break;
            case 5:
                printf("Enter the base and exponent: ");
                scanf("%lf %lf", &num1, &num2);
                result = exponentiate(num1, num2);
                printf("Result: %.2lf\n", result);
                break;
            case 6:
                printf("Enter a number: ");
                scanf("%lf", &num1);
                result = squareRoot(num1);
                printf("Result: %.2lf\n", result);
                break;
            case 7:
                printf("Enter a number: ");
                scanf("%lf", &num1);
                result = logarithm(num1);
                printf("Result: %.2lf\n", result);
                break;
            case 8:
                printf("Enter an angle in degrees: ");
                scanf("%lf", &num1);
                result = sine(num1);
                printf("Result: %.2lf\n", result);
                break;
            case 9:
                printf("Enter an angle in degrees: ");
                scanf("%lf", &num1);
                result = cosine(num1);
                printf("Result: %.2lf\n", result);
                break;
            case 10:
                printf("Enter an angle in degrees: ");
                scanf("%lf", &num1);
                result = tangent(num1);
                printf("Result: %.2lf\n", result);
                break;
            case 11:
                printf("Enter a non-negative integer: ");
                scanf("%d", &intNum);
                if (intNum < 0) {
                    printf("Error: Factorial is not defined for negative numbers.\n");
                } else {
                    result = factorial(intNum);
                    printf("Result: %.0lf\n", result);
                }
                break;
            case 12:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice! Please choose a number between 1 and 12.\n");
                break;
        }
    }

    return 0;
}

void printMenu() {
    printf("Advanced Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exponentiation\n");
    printf("6. Square Root\n");
    printf("7. Logarithm (base 10)\n");
    printf("8. Sine (degrees)\n");
    printf("9. Cosine (degrees)\n");
    printf("10. Tangent (degrees)\n");
    printf("11. Factorial\n");
    printf("12. Exit\n");
}

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        printf("Error: Division by zero!\n");
        return 0;
    }
    return a / b;
}

double exponentiate(double base, double exp) {
    return pow(base, exp);
}

double squareRoot(double a) {
    if (a < 0) {
        printf("Error: Square root of a negative number is not real.\n");
        return 0;
    }
    return sqrt(a);
}

double logarithm(double a) {
    if (a <= 0) {
        printf("Error: Logarithm of a non-positive number is undefined.\n");
        return 0;
    }
    return log10(a);
}

double sine(double a) {
    return sin(a * M_PI / 180); // Convert degrees to radians
}

double cosine(double a) {
    return cos(a * M_PI / 180); // Convert degrees to radians
}

double tangent(double a) {
    return tan(a * M_PI / 180); // Convert degrees to radians
}

double factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
