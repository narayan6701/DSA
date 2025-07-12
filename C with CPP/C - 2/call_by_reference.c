#include<stdio.h>
void swap(int temp, int *a, int *b){
    temp=*a;
    *a=*b;
    *b=temp;

}
int main(){
    int a=1, b=2, temp;
    swap(temp, &a, &b);
    printf("value of a is %d and value of b is %d",a,b);
    return 0;
}
