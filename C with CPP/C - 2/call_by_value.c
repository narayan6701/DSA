#include<stdio.h>

int sum(int a, int b){
    return a+b;
}
int main(){
    int a=10, b=5;
    printf("%d", sum(b,a));
    return 0;
}