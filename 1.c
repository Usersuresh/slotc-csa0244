#include <stdio.h>

int main()
{
    int i, num, sum = 0;

    /* Input a number from user */
    printf("Enter any number to check perfect number: ");
    if(scanf("%d", &num)==1){
    	 /* Calculate sum of all proper divisors */
    for(i = 1; i <= num / 2; i++)
    {
        /* If i is a divisor of num */
        if(num%i == 0)
        {
            sum += i;
        }
    }

    /* Check whether the sum of proper divisors is equal to num */
    if(sum == num && num > 0)
    {
        printf("%d is PERFECT NUMBER", num);
    }
    else
    {
        printf("%d is NOT PERFECT NUMBER", num);
    }
    	
	}
	else
	printf("invalid");

    return 0;
}
