#include <stdio.h>
int linearSearch(int arr[], int len, int n)
{
    int counter = -1;
    for (int i = 0; i < len; i++)
    {
        if (n == arr[i])
        {
            counter = i;
            return counter;
        }
        else
        {
            return counter;
        }
    }
}

int main()
{
    int arr[5] = {1, 24, 5, 9, 0};
    printf("enter your number to search\n");
    int num;
    scanf("%d", &num);
    if (linearSearch(arr, 5, num) != -1)
    {
        printf("Element found at %d", linearSearch(arr, 5, num));
    }
    else if (linearSearch(arr, 5, num) == -1)
    {
        printf("Element not found\n");
    }

    return 0;
}