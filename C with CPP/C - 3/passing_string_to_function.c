#include<stdio.h>
void Display(char ch[]);            //function prototype

int main(){
    char c[50];
    printf("Enter string: ");
    gets(c);
    Display(c);
    return 0;
}

void Display(char ch[]){
    printf("String output: ");
    puts(ch);
}