#include <stdio.h>

int main()
{
    int arr[5] = {6, 2, 3, 1, 9}; 
    int mini = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if(mini>arr[i]){
            mini = arr[i];
        }
    }

    printf("the minimum element is %d ", mini);
    return 0;
}