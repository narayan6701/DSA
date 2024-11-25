#include<stdio.h>
int main(){
    int *ptr = NULL;
    printf("The value of ptr is %p\n", ptr);
    int num=10;
    void *ptr2 = &num;
    printf("This is void pointer %p\n",(int)ptr2);
    int *adr;
    printf("This is wild pointer %d\n",adr);

    int *ptr3 = (int *)malloc(sizeof(int));
    free(ptr3);
    
    return 0;
}