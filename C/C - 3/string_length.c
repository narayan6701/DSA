#include <stdio.h>
int main()
{
    char ch[50] = "narayan";
    int i = 0, len = 0;
    while (ch[i] != '\0')
    {
        len++;
        i++;
    }
    printf("the length of string is %d ", len);
    return 0;
}