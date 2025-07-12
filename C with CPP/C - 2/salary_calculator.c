#include<stdio.h>
#include<ctype.h>

int main(){
    char grade;
    int basic;
    int allowance;

    printf("Enter your grade (A/B/C): ");
    scanf(" %c", &grade);
    grade = toupper(grade);

    if (grade == 'A'){
        allowance = 1700;
        printf("Your grade is %c and your allowance will be %d\n", grade, allowance);
    }
    else if(grade == 'B'){
        allowance = 1500;
        printf("Your grade is %c and your allowance will be %d\n", grade, allowance);
    }
    else{
        allowance = 1300;
        printf("Your grade is %c and your allowance will be %d\n", grade, allowance);
    }

    printf("Enter you basic salary: ");
    scanf("%d", &basic);
    printf("Your basic salary is %d\n", basic);
    
    int hra = (20*basic)/100;
    int da = (50*basic)/100;
    int pf = (11*basic)/100;

    printf("The total salary will be %d", (basic+hra+da+allowance-pf));

    return 0;
}