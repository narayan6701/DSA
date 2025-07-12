#include <stdio.h>

int main()
{

    int a, b, op;
    printf("Enter first number - ");
    scanf("%d", &a);
    printf("Enter second number - ");
    scanf("%d", &b);

    printf("\n 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n 5.Modulus\n");
    printf("\nEnter you choice - ");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        printf("%d", a + b);
        break;
    case 2:
        printf("%d", a - b);
        break;
    case 3:
        printf("%d", a * b);
        break;
    case 4:
        printf("%d", a / b);
        break;
    default:
        printf("Invalid Operation");
    }

    return 0;
}