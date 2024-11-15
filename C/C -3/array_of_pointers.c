#include<stdio.h>
int main(){
    int var1=1;
    int var2=2;
    int var3=3;
    // Declaring an array of pointers ot integers
    int *ptr[3];
    // Initializing each element of array of pointers with the addresses of integer variables
    ptr[0]=&var1;
    ptr[1]=&var2;
    ptr[2]=&var3;
    // Accessing values
    for(int i=0; i<3;i++){
        printf("Value at ptr[%d]=%d\n",i,*ptr[i]);
    }
    return 0;
}