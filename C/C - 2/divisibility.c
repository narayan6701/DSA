#include<stdio.h>
int main(){
    int m, n;
    int div_sum = 0;
    int not_div_sum = 0;
    printf("Enter the value of m\n");                   //it is used to divide
    scanf("%d",&m);
    printf("Enter the value of n\n");                   //number should be from 1 to n
    scanf("%d",&n);

    for (int i=1;i<=n; i++){
        if (i%m==0){
            div_sum = i + div_sum;
        }
        else if(i%m!=0){
            not_div_sum = i + not_div_sum;
        }
    }

    printf("The number is %d", not_div_sum-div_sum);
    return 0;
}