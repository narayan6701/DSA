#include <stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int swap_values(int a, int b)
{
    a = a + b;
    b = a - b;
    a = a - b;
    return a;
}

int main()
{
    int a = 1, b = 2;
    swap(&a, &b);
    printf("The value of a is %d and the value of b is %d\n", a, b);
    // call by value modifies the copy of the variables not the actual variables.
    printf("The value of a is %d", swap_values(a, b));
    return 0;
}