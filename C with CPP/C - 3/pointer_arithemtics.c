#include <stdio.h>
int main()
{
    int num = 10;
    int *ptr = &num;

    printf("The value of ptr is %d\n", ptr);                    
    printf("The value of ++ptr is %d\n", ++ptr);
    printf("The value of --ptr is %d\n", --ptr);
    printf("The value of ptr + 1 is %d\n", ptr + 1);
    printf("The value of ptr - 1 is %d\n", ptr - 1);
    return 0;
}