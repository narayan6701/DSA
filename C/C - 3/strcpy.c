#include<stdio.h>
#include<string.h>
void main()
{
    char copy[50], paste[50];
    printf("Enter your name to copy\t");
    gets(copy);
    strcpy(paste,copy);
    printf("The name is pasted as\t");
    puts(paste);
}