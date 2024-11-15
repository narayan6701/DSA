#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    switch(num){
        case 1: 
            printf("case 1\n");
        case 2:
            printf("case 2\n");
        case 3:
            printf("case 3\n");
            break;
        case 4:
            printf("case 4\n");        
        case 5:
            printf("case 5\n");
        default:
            printf("Invalid input"); 
    }

    return 0;
}