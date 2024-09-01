#include <stdio.h>
#include <math.h> // For the pow function

void printMenu() {
    printf("Advanced Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exponentiation\n");
    printf("6. Exit\n");
}

int main() {
    int choice;
    double num1, num2, result;

    while (1) {
        printMenu();
        printf("Enter your choice (1-6): ");
        scanf("%d", &choice);

        if (choice == 6) {
            printf("Exiting...\n");
            break;
        }

        if (choice >= 1 && choice <= 5) {
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
        }

        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Result: %.2lf\n", result);
                break;
            case 2:
                result = num1 - num2;
                printf("Result: %.2lf\n", result);
                break;
            case 3:
                result = num1 * num2;
                printf("Result: %.2lf\n", result);
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2lf\n", result);
                } else {
                    printf("Error: Division by zero!\n");
                }
                break;
            case 5:
                result = pow(num1, num2);
                printf("Result: %.2lf\n", result);
                break;
            default:
                printf("Invalid choice! Please choose a number between 1 and 6.\n");
                break;
        }
    }

    return 0;
}
