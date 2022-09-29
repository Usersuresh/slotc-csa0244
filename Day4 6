#include <stdio.h>
 struct student
{
    int rollno;
	char name [30];
    int  marks[3];
    int  total;
    float p;
};
 int main()
{
    struct student s;
    int i;
	printf("Enter name: ");
    gets(s.name);
    printf("Enter roll no:\n");
    scanf("%d",&s.rollno);
 	printf("Enter marks:\n");
    s.total=0;
    for(i=0;i<3;i++){
        printf("Marks in subject %d: ",i+1);
        scanf("%d",&s.marks[i]);
        if (s.marks[i]<=0)
        {
        	printf("enter postive");
        	break;
		}
        s.total+=s.marks[i];
    }
    s.p=((float)s.total/(float)300)*100;
    if (s.marks[i]>0)
    {
 	printf("\nName: %s \nRoll no: %d \nTotal Marks: %d \nPercentage: %.2f",s.name,s.rollno,s.total,s.p);
 	}
	 return 0;
}
