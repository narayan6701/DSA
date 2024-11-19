#include <stdio.h>

int main()
{
    int arr[5];
    for (int i = 0; i <5; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];

    for (int i = 1; i <5; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    printf("The room will be illuminated for %d days", max);
    return 0;
}