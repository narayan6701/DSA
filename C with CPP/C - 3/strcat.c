#include<stdio.h>
#include<string.h>

int main(){
    char first_name[30]="College ";
    char middle_name[]="of applied ";
    char last_name[]="Buisness";

    strcat(first_name, middle_name);
    puts(first_name);

    strcat(first_name, last_name);
    puts(first_name);

    return 0;
}