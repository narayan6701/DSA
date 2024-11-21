#include<stdio.h>
int main(){
    char name[30];
    printf("Enter name\n");
    gets(name);
    printf("Name: ");
    puts(name);
    return 0;
}