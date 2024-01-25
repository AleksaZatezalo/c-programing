/* Assigns value to grade.*/

#include <stdio.h>

int main(void){
    int grade;

    printf("Enter your grade: ");
    scanf("%d", &grade);
    
    switch (grade)
    {
    case 5:printf("Great");
        /* code */
        break;
    case 4:printf("Good");
        break;
    case 3:printf("Average");
        break;
    case 2:printf("Poor");
        break;
    case 1:printf("Failing");
        break;
    default:
        break;
    }
}