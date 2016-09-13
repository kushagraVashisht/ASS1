#include<stdio.h>
#include<stdlib.h>
int near_equal(double x1,double x2);
int main()
{
int m,n;
printf("enter the first number: ");
if(scanf("%d",&m)!=1)
{
	printf("enter a valid input please");
}
printf("enter the second number: ");
if(scanf("%d",&n)!=1)
{
	printf("enter a valid input please");
}
near_equal(m,n);
return 0;
}


int near_equal(double x1,double x2)
{
	
	if((x1 == x2 == 0.0) || (x1 + (0.1 * x1) == x2) || (x1 - (0.1 * x1) == x2))
	{
		printf("TRUE\n");
	}
	else
	{
		printf("FALSE\n");
	}
return 0;
}
