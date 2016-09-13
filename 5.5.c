#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
int is_perfect(int n);
int next_prime(int n);

int main()
{
int n;
printf("enter a number: ");
if(scanf("%d",&n)!=1)
{
	printf("enter a valid input please");
}
printf("%d\n",is_perfect(n));
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
	if(sum == n)
	{
		return(TRUE);
	}
	else
	{
		return(FALSE);
	}
}

int next_prime(int n)
{
	int i,sum;
	sum=1;
	for(i=n+1;i<10000;i++)
	{
		sum+=i;
	}
	return rem;
}