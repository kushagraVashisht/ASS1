#include<stdio.h>
#include<stdlib.h>
int factorial(int x);
int combination(int n,int k);
int main()
{
int n,k;
printf("enter the number n: ");
if(scanf("%d",&n)!=1)
{
	printf("enter a valid input");
}
printf("enter the number k that is less than the value of n: ");
if(scanf("%d",&k)!=1)
{
	printf("enter a valid input");
}
printf("value for the combination is: %d\n",combination(n,k));
return 0;
}


int factorial(int x)
{
	int i,fact;
	fact=1;
	for(i=x;i>0;i--)
	{
		fact = fact * i;
	}
	return fact;
}

int combination(int n,int k)
{
	int comb;
	if(n > k)
	{
		comb=(factorial(n))/(factorial(n-k)*factorial(k));
	}
	else if(n < k)
	{
		printf("please enter a value for k smaller than n");
	}
	return comb;
}