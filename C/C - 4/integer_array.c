#include<stdio.h>
int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    int sum = 0;

    for(int i = 0; i < 5; i++){
        sum = sum + *ptr;
        ptr++;
    }

    printf("Sum of array elements: %d\n", sum);
    return 0;
}