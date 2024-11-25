#include<stdio.h>
#include<string.h>
int main(){
    char ch[5][10];
    for(int i=0; i<5; i++){
        scanf("%s",&ch[i]);
    }

    for(int i=0; i<5; i++){
        printf("%s ",ch[i]);
    }

    return 0;
}