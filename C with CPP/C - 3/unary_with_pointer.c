#include<stdio.h>
int main(){
    int x=10;
    int*y=&x;
    printf("The actual address of x is %d\n", y);
    printf("address after increment of y is %d\n", ++y);
    return 0;

}