#include<stdio.h>
int main(){
    char copy[50] = "narayan";
    char paste[50];
    int i;

    for(i=0; copy[i]!='\0'; i++){
        paste[i]=copy[i];
    }
    paste[i]='\0';
    printf("%s",paste);
}