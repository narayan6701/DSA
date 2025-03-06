#include<stdio.h>
int main(){
    char str[] = "Hello World";
    int len = sizeof(str)/sizeof(str[0]);

    int word = 1;
    int ch = 0;
    for(int i=0; i<len; i++){
        if(str[i]==' '){
            word++;
        }
        else{
            ch++;
        }
    }

    printf("Word: %d\n", word);
    printf("Character: %d\n", ch);  
    return 0;
}