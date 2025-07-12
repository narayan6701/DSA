#include<stdio.h>

void insertElement (int arr[], int *size, int element, int position){
    if(position>*size || position<0){
        printf("Invalid position\n");
        return;
    }
    for(int i = *size; i>position; i--){
        arr[i]=arr[i-1];
    }
    arr[position] = element;
    (*size)++;
}

int main(){
    int arr[5] = {1,2,3,4}, size=0;
    int element, position;
    insertElement(arr,&size,9,2);
    printf("%d", arr[2]);
    return 0;

}