#include <stdio.h>

int main() {
    // Write C code here
    int rows=5;
    int max=5;
    int min=1;
    
    for(rows;rows>=1;rows--){
        for(max; max>=min; max--){
            printf("%d",max);
        }
        max=5;
        min++;
        printf("\n");
    }
    

    return 0;
}