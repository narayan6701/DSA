#include<stdio.h>
int main(){
    int int_arr[] = {12,23,45,67,89};
    int *ptrArr = int_arr;
    printf("Value at ptrArr: %d\n", *ptrArr);
    // Adding 2 in ptrArr
    ptrArr=ptrArr+2;
    printf("Value at ptrArr after adding 2: %d\n", *ptrArr);
    return 0;
}