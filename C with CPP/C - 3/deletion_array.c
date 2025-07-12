#include<stdio.h>

void deleteElement(int arr[], int *size, int position){
    if(position>=*size || position<0){
        printf("Invalid position\n");
        return;
    }
    for(int i = position; i<*size-1; i++){
        arr[i]=arr[i+1];
    }
    (*size)--;
}
int main(){
    int arr[3]={1,2,3}, size=0;
    int postion;
    deleteElement(arr, &size, 2);
    printf("%d ", arr[1]);
    return 0;
}