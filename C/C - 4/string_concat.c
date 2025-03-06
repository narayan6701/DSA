//program to concatenate two strings without inbuilt function

#include<stdio.h>
int main(){
    char str1[4] = "abc";
    char str2[4] = "def";

    char res[7];

    for(int i=0; i<3; i++){
        res[i] = str1[i];
    }
    for(int i=0; i<3; i++){
        res[i+3] = str2[i];
    }

    printf("Concatenated string: %s\n", res);
    return 0;

}