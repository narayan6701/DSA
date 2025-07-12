#include<stdio.h>
int main(){
    int arr[5];
    int length = sizeof(arr)/sizeof(arr[0]);

    printf("Please enter the value in array\n");
    for(int i=0;i<length;i++){
        scanf("%d ",&arr[i]);
    }

    for(int i=0;i<length;i++){
        printf("%d ", arr[i]);
    }

    return 0;
}