#include <stdio.h>
int main()
{
    int num=10;
    int *ptr = &num;
    printf("The address of variable is %p\n",ptr);
    printf("Dereferencing - The value at address is %d\n",*ptr);
    return 0;
}