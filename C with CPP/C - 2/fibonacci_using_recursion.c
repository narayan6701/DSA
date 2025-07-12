// Online C compiler to run C program online
#include <stdio.h>
int fib(int n){
    if (n==0){return 0;}
    if (n==1){return 1;}
    else{
        return (fib(n-1)+fib(n-2));
    }
}

int main() {
    // Write C code here
    int num=10;
    int log;
    for (int i=0; i<num; i++){
        printf("%d",fib(i));
        int log=fib(i);
        if(log>num){
            break;
        }
    }

    return 0;
}