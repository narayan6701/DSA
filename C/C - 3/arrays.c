#include<stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    int arr2[10];
    int length = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<length; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}