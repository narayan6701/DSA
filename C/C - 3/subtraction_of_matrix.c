#include<stdio.h>
int main(){
    int arr1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int arr2[2][3] = {{7, 8, 9}, {10, 11, 12}};

    int result[2][3];

    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            result[i][j] = arr2[i][j] - arr1[i][j];
        }
    }

    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            printf("%d ",result[i][j]);
        }
    }

    return 0;
}