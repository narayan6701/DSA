#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int(*ptr)[5] = &arr;

    printf("ptr = %p\n", ptr);
    printf("ptr = %p\n", ptr);
    return 0;
}