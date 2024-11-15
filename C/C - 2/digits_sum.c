#include <stdio.h>
int main()
{
    int num;
    printf("Enter your number\n");
    scanf("%d", &num);
    int total = 0;
    for (num; num > 0; num /= 10)
    {
        total = total + num % 10;
    }
    printf("%d is the sum of digits\n", total);
    return 0;
}