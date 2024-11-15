#include<stdio.h>
int main(){
    int num,counter=0;
    printf("Enter your number\n");
    scanf("%d", &num);

    if(num<=1){
        printf("Not prime number\n");
    }
    else{
        for(int i=2; i<=num/2; i++){
            if(num%i==0){
                counter++;
            }
        }
    }

    if(counter==0){
        printf("Prime number\n");
    }
    else{
        printf("Not prime number\n");
    }
    return 0;
}