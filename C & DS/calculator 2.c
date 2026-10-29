#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
    return a / b;
}

int main() {
    int choice, num1, num2, result;

    do {
        printf("\n----- Calculator Menu -----\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            printf("Enter first number: ");
            scanf("%d", &num1);
            printf("Enter second number: ");
            scanf("%d", &num2);
        }

        switch (choice) {
            case 1:
                result = add(num1, num2);
                printf("Result: %d\n", result);
                break;
            case 2:
                result = subtract(num1, num2);
                printf("Result: %d\n", result);
                break;
            case 3:
                result = multiply(num1, num2);
                printf("Result: %d\n", result);
                break;
            case 4:
                result = divide(num1, num2);
                if (num2 != 0)
                    printf("Result: %d\n", result);
                break;
            case 5:
                printf("Exiting calculator. Goodbye!\n");
                break;
            default:
                printf("Invalid choice! Please select between 1 and 5.\n");
        }

    } while (choice != 5);

    return 0;
}