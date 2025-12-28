#include <stdio.h>
#include <stdlib.h>
int main() {
    // name:-aniket kumar
    // erp:-10190
    int num1, num2, choice, result;
    printf("--- Bitwise Operations Menu ---\n");
    printf("1. Bitwise AND (&)\n");
    printf("2. Bitwise OR (|)\n");
    printf("3. Bitwise XOR (^)\n");
    printf("4. Left Shift (<<)\n");
    printf("5. Right Shift (>>)\n");
    printf("6. Exit\n");
    printf("-------------------------------\n");
    printf("Enter two integers: ");
    if (scanf("%d %d", &num1, &num2) != 2) {
        printf("Invalid input. Please enter integers only.\n");
        return 1;
    }
    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            result = num1 & num2;
            printf("Result: %d & %d = %d\n", num1, num2, result);
            break;
        case 2:
            result = num1 | num2;
            printf("Result: %d | %d = %d\n", num1, num2, result);
            break;
        case 3:
            result = num1 ^ num2;
            printf("Result: %d ^ %d = %d\n", num1, num2, result);
            break;
        case 4:
            result = num1 << num2;
            printf("Result: %d << %d = %d\n", num1, num2, result);
            printf("(Note: This shifts %d left by %d positions)\n", num1, num2);
            break;
        case 5:
            result = num1 >> num2;
            printf("Result: %d >> %d = %d\n", num1, num2, result);
            printf("(Note: This shifts %d right by %d positions)\n", num1, num2);
            break;
        case 6:
            printf("Exiting program. Goodbye!\n");
            exit(0);
        default:
            printf("Error: Invalid choice selected.\n");
    }
    return 0;
}
// output:
// --- Bitwise Operations Menu ---
// 1. Bitwise AND (&)
// 2. Bitwise OR (|)
// 3. Bitwise XOR (^)
// 4. Left Shift (<<)
// 5. Right Shift (>>)
// 6. Exit
// -------------------------------
// Enter two integers: 1
// 5
// Enter your choice (1-6): 1
// Result: 1 & 5 = 1

// --- Bitwise Operations Menu ---
// 1. Bitwise AND (&)
// 2. Bitwise OR (|)
// 3. Bitwise XOR (^)
// 4. Left Shift (<<)
// 5. Right Shift (>>)
// 6. Exit
// -------------------------------
// Enter two integers: 15 12
// Enter your choice (1-6): 2
// Result: 15 | 12 = 15
