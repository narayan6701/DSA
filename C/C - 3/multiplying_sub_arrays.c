#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int a = 0, b = 0;

    for (int i = 0; i <= 1; i++)
    {
        a = a + arr[i];
    }

    for (int i = 2; i < 5; i++)
    {
        b = b + arr[i];
    }

    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
    printf("The multiplication of two sub arrays will be %d", a * b);
}