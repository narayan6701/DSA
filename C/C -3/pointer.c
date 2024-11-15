#include<stdio.h>
int main(){
    int num;
    int *adr = &num;

    printf("Enter the value of num\n");
    scanf("%d", &num);

    printf("The value of num is %d\n", num);
    printf("The address of num is %p\n", adr);
    printf("The value at address %p of num is %d\n",adr, *adr);
    return 0;
}