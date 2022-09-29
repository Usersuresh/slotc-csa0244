#include <stdio.h>
#include<stdlib.h>
union Student
{
    char stud_name[30];
    float roll_number;
    float percentage;
} stud_1 ;                  

int main(){
    union Student stud_2;  
    
    printf("Enter details of stud_1 : \n");
    printf("Name : ");
    scanf("%s", stud_1.stud_name);
    printf("Roll Number : ");
    scanf("%f", &stud_1.roll_number);
    printf("Percentage : ");
    scanf("%f", &stud_1.percentage);
    
   
    printf("Name of the Student : %s\n", stud_1.stud_name);
    printf("Roll Number of the Student : %f\n", stud_1.roll_number);
    printf("Percentage of the Student : %f\n", stud_1.percentage);
}
