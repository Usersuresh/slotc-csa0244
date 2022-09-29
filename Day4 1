#include <stdio.h>
#include<stdlib.h>
struct student {
    char name[50];
    int roll;
    float marks;
} s;

int main() {
    printf("Enter information:\n");
    printf("Enter name: ");
    fgets(s.name, sizeof(s.name), stdin);

    printf("Enter roll number: ");
    if (scanf("%d", &s.roll))  {
    } else {
        printf("Error! Not a valid integer");
        exit(-1);
    }

    printf("Enter marks: ");
    if (scanf("%f", &s.marks))  {
    } else {	+
        printf("Error! Not a valid integer");
        exit(-1);
    }

    printf("Displaying Information:\n");
    printf("Name: ");
    printf("%s", s.name);
    printf("Roll number: %d\n", s.roll);
    printf("Marks: %.1f\n", s.marks);

    return 0;
}
