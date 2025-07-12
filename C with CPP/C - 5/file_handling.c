#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fptr, *copyf;
    char ch;
    fptr = fopen("demo.txt", "r");
    copyf = fopen("copy.txt", "w");

    if(fptr == NULL){
        printf("File not found\n");
        exit(0);
    }
    if(copyf==NULL){
        printf("File Error\n");
        exit(0);
    }   
    while((ch = getc(fptr)) != EOF){
        fputc(ch, copyf);
    }
    printf("Copied Success\n");
    fclose(fptr);
    fclose(copyf);
    return 0;
}