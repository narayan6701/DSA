#include<stdio.h>

int sum(int a, int b){
    printf("%d", a+b);
}

int main(){
    int a=10, b=20;
    sum(a, b);
    return 0;
}