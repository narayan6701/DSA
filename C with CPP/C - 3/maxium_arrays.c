#include<stdio.h>
int main(){
    int arr[7] = {1,2,3,99,5,6,7};
    int max = arr[0];

    for(int i=0; i<7; i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }

    printf("the maxium element in array is %d", max);
    return 0;

}