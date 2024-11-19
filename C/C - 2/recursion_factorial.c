#include<stdio.h>

int factorial(int n){
    if(n==0){                           //Base condition
        return 1;
    }
    else{                               //Recursive callw
        return n*factorial(n-1);
    }
}
int main(){
    int number;
    printf("Enter your number\n");
    scanf("%d", &number);

    printf("The factorial of %d is %d.", number, factorial(number));
    return 0;
}