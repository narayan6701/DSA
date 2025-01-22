#include<stdio.h>
int main(){
    struct{
        char name[20];
        int ID;
        float marks;
    }st1, st2={"xyz", 881, 100};

    printf("Enter the name of student 1: \n");
    scanf("%s", &st1.name);
    printf("Enter the ID of student 1: \n");
    scanf("%d", &st1.ID);
    printf("Enter the marks of student 1: \n"); 
    scanf("%f", &st1.marks);

    printf("The name of student 1 is %s with ID %d and marks %1.f\n",st1.name, st1.ID, st1.marks);
    printf("The name of student 2 is %s with ID %d and marks %1.f\n",st2.name, st2.ID, st2.marks);
    return 0;
}