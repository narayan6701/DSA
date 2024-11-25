#include<stdio.h>
int main(){
    int num=10;
    int *ptr1 = &num;
    int **ptr2 = &ptr1;

    printf("%d ", ptr2);
    printf("%d ", *ptr2);
    printf("%d ", **ptr2);

    return 0;

}