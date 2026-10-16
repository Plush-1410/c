#include <stdio.h>

int main(void)
{
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    /* Arithmetic operators */
    printf("\nArithmetic Operators:\n");
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);

    if (b != 0)
    {
        printf("Division: %d\n", a / b);
        printf("Modulus: %d\n", a % b);
    }
    else
    {
        printf("Division: Not possible (division by zero)\n");
        printf("Modulus: Not possible (division by zero)\n");
    }

    /* Relational operators */
    printf("\nRelational Operators:\n");
    printf("Equal to: %d\n", a == b);
    printf("Not equal to: %d\n", a != b);
    printf("Greater than: %d\n", a > b);
    printf("Less than: %d\n", a < b);
    printf("Greater than or equal to: %d\n", a >= b);
    printf("Less than or equal to: %d\n", a <= b);

    return 0;
}