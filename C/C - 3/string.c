#include <stdio.h>
int main()
{
    char name[30], ch = 'a';
    int i = 0;
    printf("Enter name\n");
    gets(name);
    printf("Name: ");
    puts(name);

    scanf("%s", name);
    printf("The value of string is %s\n", name);

    while (ch != '\n')
    {
        ch = getchar();
        name[i] = ch;
        i++;
    }

    name[i] = '\0';
    printf("Name is %s", name);
    return 0;
}