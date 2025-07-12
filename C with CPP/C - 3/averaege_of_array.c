#include<stdio.h>
int average(int arr[], int length){
    int sum=0;
    for(int i=0; i<length; i++){
        sum+=arr[i];   
    }
    return sum/length;

}

int main(){
    int arr[5] = {1,2,3,4,5};
    int length = sizeof(arr)/sizeof(arr[0]);
    printf("%d ", average(arr, length));
    return 0;
}