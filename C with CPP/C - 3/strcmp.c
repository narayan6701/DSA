#include<stdio.h>
#include<string.h>
int main(){
    char str1[30], str2[40], diff;
    printf("Enter first string\t");
    gets(str1);
    printf("\nEnter second string:\t");
    gets(str2);
    diff = strcmp(str1, str2);

    if(diff>0){
        printf("\n%s is greater than %s by ASCII value difference %d", str1, str2, diff);
    }
    else if(diff<0){
        printf("\n%s is greater than %s by ASCII value difference %d", str1, str2, diff);
    }
    else
    {
        printf("\n%s is same as %s", str1, str2);
    }
    return 0;
}
