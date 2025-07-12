#include<stdio.h>
struct student {
    char name[20];
    int ID;
    float CSE_marks;
    char gender;
    long int phone_no;
};

void main(){
    struct student st1={"Ishtiaque", 5482, 13.5, 'M', 16021548 };
    struct student st2={"Oshin",4288, 15, 'F', 19845321};

    printf("Name %s ID %d CSE Marks: %.1f Gender: %c Phone: %d\n", st1.name, st1.CSE_marks, st1.gender, st1.phone_no);
    printf("Name %s ID %d CSE Marks: %1f Gender: %c Phone: %d\n", st2.name, st2.CSE_marks, st2.gender, st2.phone_no);
}