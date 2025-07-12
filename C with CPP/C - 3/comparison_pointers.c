#include<stdio.h>
int main(){
    const int MAX = 3;
    int var[] = {100,100,200};
    int i, *ptr1, *ptr2;
    ptr1=var;
    ptr2=&var[MAX-1];
    while(ptr1<=ptr2){
        printf("Address of var[%d]=%p\n",i,ptr1);
        printf("Address of var[%d]=%p\n",i,*ptr1);
        ptr1++;
        i++;
        return 0;
    }
}