#include <stdio.h>
int main()
{
    int max = 3;
    int arr[3] = {10, 100, 1000};
    int i = 0, *ptr1, *ptr2;

    ptr1 = arr;
    ptr2 = &arr[max - 1];

    while(ptr1 <= ptr2)
    {
        printf("Address of arr[%d] is %p\n", i, ptr1);
        printf("Value of arr[%d] is %d\n", i, *ptr1);
        ptr1++;
        i++;
    }
    return 0;
}