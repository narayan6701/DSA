#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 4, 5, 3};
    int length = sizeof(arr) / sizeof(arr[0]);
    int num, count = -1;
    printf("Enter your number to search\n");
    scanf("%d", &num);
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == num)
        {
            count = i;
        }
    }

    if (count == -1)
    {
        printf("number not found\n");
    }
    else
    {
        printf("number found at index %d", count);
    }

    return 0;
}