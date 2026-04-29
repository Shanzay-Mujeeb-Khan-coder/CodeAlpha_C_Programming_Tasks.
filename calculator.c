#include <stdio.h>

int main()
{
    char op;
    int num1, num2;

    printf("Operation (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter Two numbers: ");
    scanf("%d %d", &num1, &num2);

    switch (op) {
        case '+':
            printf("%d + %d = %d", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%d - %d = %d", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%d * %d = %d", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("%d / %d = %d (Remainder: %d)", num1, num2, num1 / num2, num1 % num2);
            else
                printf("Error !");
            break;
        default:
            printf("Wrong operator!");
    }
    return 0;
}