#include<stdio.h>
int main()
{
	int  age,x;
	printf("enter age of person:");
  if(scanf("%d",&age)==1)
	{
    if(age>17)
	{
		printf("\nperson is eligible for voting");
	}
	else{
	 printf("\nperson is not eligible");
	 x=18-age;
    	printf("\nyour allowed to vote after %d",x);
	}
	}
	else{
		printf("invalid");
	}
	return 0;
