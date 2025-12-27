#include <stdio.h>
#include "calc.h"

int main(void) {
    int choice;
    int a, b;
    int result = 0;

    printf("Select operation:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    switch (choice) {
        case 1:
            result = add(a, b);
            break;
        case 2:
            result = sub(a, b);
            break;
        case 3:
            result = mul(a, b);
            break;
        case 4:
            result = divide(a, b);
            break;
        default:
            printf("Invalid choice\n");
            return 1;
    }

    printf("Result: %d\n", result);
    return 0;
}
