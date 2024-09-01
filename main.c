#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <complex.h>

// Function prototypes
void handleBasicOperations(char *operation);
void handleTrigonometricFunctions(char *operation);
void handleLogarithmicFunctions(char *operation);
void handleFactorial();
void handleComplexNumbers();
void handleMatrixOperations();
void handleStatistics();
void displayHelp();
void clearInputBuffer();
void showFormulas();

int main() {
    char operation[100];

    printf("=========================================\n");
    printf("        Welcome to Advanced Calculator    \n");
    printf("=========================================\n");

    showFormulas();  // Show formulas at the beginning

    printf("Type 'help' for a list of commands.\n");

    while (1) {
        printf("\nEnter operation: ");
        scanf("%s", operation);

        if (strcmp(operation, "add") == 0 || strcmp(operation, "sub") == 0 || 
            strcmp(operation, "mul") == 0 || strcmp(operation, "div") == 0 || 
            strcmp(operation, "exp") == 0) {
            handleBasicOperations(operation);
        } else if (strcmp(operation, "sin") == 0 || strcmp(operation, "cos") == 0 || 
                   strcmp(operation, "tan") == 0) {
            handleTrigonometricFunctions(operation);
        } else if (strcmp(operation, "log") == 0 || strcmp(operation, "sqrt") == 0) {
            handleLogarithmicFunctions(operation);
        } else if (strcmp(operation, "fact") == 0) {
            handleFactorial();
        } else if (strcmp(operation, "complex") == 0) {
            handleComplexNumbers();
        } else if (strcmp(operation, "matrix") == 0) {
            handleMatrixOperations();
        } else if (strcmp(operation, "stats") == 0) {
            handleStatistics();
        } else if (strcmp(operation, "exit") == 0) {
            printf("\nThank you for using the Advanced Calculator! Goodbye!\n");
            break;
        } else if (strcmp(operation, "help") == 0) {
            displayHelp();
        } else {
            printf("Invalid operation. Type 'help' for a list of valid commands.\n");
        }
    }

    return 0;
}

// Function Definitions

void showFormulas() {
    printf("\n==================== Formulas ====================\n");
    printf("1. Addition:             num1 + num2\n");
    printf("2. Subtraction:          num1 - num2\n");
    printf("3. Multiplication:       num1 * num2\n");
    printf("4. Division:             num1 / num2\n");
    printf("5. Exponentiation:       num1 ^ num2\n");
    printf("6. Sine:                 sin(angle in degrees)\n");
    printf("7. Cosine:               cos(angle in degrees)\n");
    printf("8. Tangent:              tan(angle in degrees)\n");
    printf("9. Logarithm (base 10):  log10(num)\n");
    printf("10. Square Root:         sqrt(num)\n");
    printf("11. Factorial:           n!\n");
    printf("12. Complex Addition:    (a + bi) + (c + di)\n");
    printf("13. Complex Subtraction: (a + bi) - (c + di)\n");
    printf("14. Complex Multiplication: (a + bi) * (c + di)\n");
    printf("15. Complex Division:    (a + bi) / (c + di)\n");
    printf("16. Matrix Addition:     [A] + [B]\n");
    printf("17. Matrix Subtraction:  [A] - [B]\n");
    printf("18. Mean:                sum(data) / n\n");
    printf("19. Median:              middle value of sorted data\n");
    printf("20. Standard Deviation:  sqrt(sum((data[i] - mean)^2) / n)\n");
    printf("=================================================\n");
}

void displayHelp() {
    printf("\n===================== Help =====================\n");
    printf("Basic Operations:\n");
    printf("  add      : Addition\n");
    printf("  sub      : Subtraction\n");
    printf("  mul      : Multiplication\n");
    printf("  div      : Division\n");
    printf("  exp      : Exponentiation\n");
    printf("Trigonometric Functions:\n");
    printf("  sin      : Sine of an angle in degrees\n");
    printf("  cos      : Cosine of an angle in degrees\n");
    printf("  tan      : Tangent of an angle in degrees\n");
    printf("Logarithmic Functions:\n");
    printf("  log      : Logarithm (base 10)\n");
    printf("  sqrt     : Square Root\n");
    printf("Other Functions:\n");
    printf("  fact     : Factorial of a non-negative integer\n");
    printf("  complex  : Complex number operations\n");
    printf("  matrix   : Matrix addition and subtraction\n");
    printf("  stats    : Calculate mean, median, and standard deviation\n");
    printf("General Commands:\n");
    printf("  help     : Show this help message\n");
    printf("  exit     : Exit the calculator\n");
    printf("================================================\n");
}

void handleBasicOperations(char *operation) {
    double num1, num2, result;

    printf("\nEnter two numbers separated by space: ");
    if (scanf("%lf %lf", &num1, &num2) != 2) {
        printf("Invalid input! Please enter valid numbers.\n");
        clearInputBuffer();
        return;
    }

    if (strcmp(operation, "add") == 0) {
        result = num1 + num2;
    } else if (strcmp(operation, "sub") == 0) {
        result = num1 - num2;
    } else if (strcmp(operation, "mul") == 0) {
        result = num1 * num2;
    } else if (strcmp(operation, "div") == 0) {
        if (num2 == 0) {
            printf("Error: Division by zero!\n");
            return;
        }
        result = num1 / num2;
    } else if (strcmp(operation, "exp") == 0) {
        result = pow(num1, num2);
    }

    printf("\n=========================================\n");
    printf("Formula: %s = %.2lf\n", operation, result);
    printf("Result: %.2lf\n", result);
    printf("=========================================\n");
}

void handleTrigonometricFunctions(char *operation) {
    double angle, result;

    printf("\nEnter an angle in degrees: ");
    if (scanf("%lf", &angle) != 1) {
        printf("Invalid input! Please enter a valid angle.\n");
        clearInputBuffer();
        return;
    }

    double radians = angle * M_PI / 180; // Convert degrees to radians

    if (strcmp(operation, "sin") == 0) {
        result = sin(radians);
    } else if (strcmp(operation, "cos") == 0) {
        result = cos(radians);
    } else if (strcmp(operation, "tan") == 0) {
        result = tan(radians);
    }

    printf("\n=========================================\n");
    printf("Formula: %s(%lf degrees) = %.2lf\n", operation, angle, result);
    printf("Result: %.2lf\n", result);
    printf("=========================================\n");
}

void handleLogarithmicFunctions(char *operation) {
    double num, result;

    printf("\nEnter a number: ");
    if (scanf("%lf", &num) != 1) {
        printf("Invalid input! Please enter a valid number.\n");
        clearInputBuffer();
        return;
    }

    if (strcmp(operation, "log") == 0) {
        if (num <= 0) {
            printf("Error: Logarithm of a non-positive number is undefined.\n");
            return;
        }
        result = log10(num);
    } else if (strcmp(operation, "sqrt") == 0) {
        if (num < 0) {
            printf("Error: Square root of a negative number is not real.\n");
            return;
        }
        result = sqrt(num);
    }

    printf("\n=========================================\n");
    printf("Formula: %s(%lf) = %.2lf\n", operation, num, result);
    printf("Result: %.2lf\n", result);
    printf("=========================================\n");
}

void handleFactorial() {
    int n;
    double result = 1;

    printf("\nEnter a non-negative integer: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Invalid input! Please enter a valid non-negative integer.\n");
        clearInputBuffer();
        return;
    }

    for (int i = 1; i <= n; i++) {
        result *= i;
    }

    printf("\n=========================================\n");
    printf("Formula: %d! = %.0lf\n", n, result);
    printf("Result: %.0lf\n", result);
    printf("=========================================\n");
}

void handleComplexNumbers() {
    double a, b, c, d;
    char operation;

    printf("\nEnter the real and imaginary parts of the first complex number (a + bi): ");
    if (scanf("%lf %lf", &a, &b) != 2) {
        printf("Invalid input! Please enter valid numbers.\n");
        clearInputBuffer();
        return;
    }

    printf("Enter the real and imaginary parts of the second complex number (c + di): ");
    if (scanf("%lf %lf", &c, &d) != 2) {
        printf("Invalid input! Please enter valid numbers.\n");
        clearInputBuffer();
        return;
    }

    printf("Choose operation (+, -, *, /): ");
    scanf(" %c", &operation);

    double complex num1 = a + b * I;
    double complex num2 = c + d * I;
    double complex result;

    if (operation == '+') {
        result = num1 + num2;
    } else if (operation == '-') {
        result = num1 - num2;
    } else if (operation == '*') {
        result = num1 * num2;
    } else if (operation == '/') {
        result = num1 / num2;
    } else {
        printf("Invalid operation for complex numbers.\n");
        return;
    }

    printf("\n=========================================\n");
    printf("Result: %.2lf + %.2lfi\n", creal(result), cimag(result));
    printf("=========================================\n");
}

void handleMatrixOperations() {
    int rows, cols;

    printf("\nEnter the number of rows and columns for the matrices (separated by space): ");
    if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0) {
        printf("Invalid input! Please enter valid positive integers.\n");
        clearInputBuffer();
        return;
    }

    double mat1[rows][cols], mat2[rows][cols], result[rows][cols];

    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (scanf("%lf", &mat1[i][j]) != 1) {
                printf("Invalid input! Please enter valid numbers.\n");
                clearInputBuffer();
                return;
            }
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (scanf("%lf", &mat2[i][j]) != 1) {
                printf("Invalid input! Please enter valid numbers.\n");
                clearInputBuffer();
                return;
            }
        }
    }

    printf("Choose operation (+, -): ");
    char operation;
    scanf(" %c", &operation);

    if (operation == '+') {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result[i][j] = mat1[i][j] + mat2[i][j];
            }
        }
    } else if (operation == '-') {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result[i][j] = mat1[i][j] - mat2[i][j];
            }
        }
    } else {
        printf("Invalid operation for matrices.\n");
        return;
    }

    printf("\n=========================================\n");
    printf("Resultant Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%.2lf ", result[i][j]);
        }
        printf("\n");
    }
    printf("=========================================\n");
}

void handleStatistics() {
    int n;
    printf("\nEnter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input! Please enter a valid positive integer.\n");
        clearInputBuffer();
        return;
    }

    double data[n], sum = 0, mean, median, stddev = 0;

    printf("Enter the data elements:\n");
    for (int i = 0; i < n; i++) {
        if (scanf("%lf", &data[i]) != 1) {
            printf("Invalid input! Please enter valid numbers.\n");
            clearInputBuffer();
            return;
        }
        sum += data[i];
    }

    // Calculate mean
    mean = sum / n;

    // Sort data to calculate median
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (data[i] > data[j]) {
                double temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }

    // Calculate median
    if (n % 2 == 0) {
        median = (data[n/2 - 1] + data[n/2]) / 2;
    } else {
        median = data[n/2];
    }

    // Calculate standard deviation
    for (int i = 0; i < n; i++) {
        stddev += pow(data[i] - mean, 2);
    }
    stddev = sqrt(stddev / n);

    printf("\n=========================================\n");
    printf("Statistics:\n");
    printf("Mean:               %.2lf\n", mean);
    printf("Median:             %.2lf\n", median);
    printf("Standard Deviation: %.2lf\n", stddev);
    printf("=========================================\n");
}

void clearInputBuffer() {
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}
