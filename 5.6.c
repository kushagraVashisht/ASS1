#include<stdio.h>
#include<stdlib.h>
int is_perfect(int n);

int main()
{
int m,n;
printf("enter a number: ");
if(scanf("%d",&m)!=1)
{
	printf("enter a valid input please");
}
printf("enter a number: ");
if(scanf("%d",&n)!=1)
{
	printf("enter a valid input please");
}
if((is_perfect(m) == n) && (is_perfect(n) == m))
	{
		printf("the pairs are amicable\n");
	}
else
	{
		printf("the pairs are not amicable\n");
	}
return 0;
}
	
int is_perfect(int n)
{
	int i,sum;
	sum=1;
	for(i=2;i<n;i++)
	{
		if(n%i == 0)
		{
			sum += i;
		}
	}
	return sum;
}