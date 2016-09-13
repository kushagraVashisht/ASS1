#include<stdio.h>
#include<stdlib.h>
double sum_sequence(int n);

int main()
{
int n;
printf("enter the integer: ");
if(scanf("%d",&n)!=1)
{
	printf("please enter a valid integer");
}
printf("the answer to the sequence is %f\n",sum_sequence(n));
return 0;
}








double sum_sequence(int n)
{
	int i,sum=1,prod=1,result=0;
	for(i=1;i<=n;i++)
	{
		sum += i;
		prod *= i;
		result += sum / prod;
	}
	return result;
}