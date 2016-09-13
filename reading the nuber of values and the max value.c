#include<stdio.h>
#include<stdlib.h>
int main()
{
	int next,n,max;
	printf("enter some values: ");
	if(scanf("%d",&next)!=1)
	{
		printf("no input detected");
		exit(EXIT_FAILURE);
	}
	n=1;
	max=next;
	while(scanf("%d",&next)!=EOF)
	{
		if(next>max)
		{
			max=next;
		}
		n+=1;
	}
	printf("the number with the max value is : %d\n",max);
	printf("number of values read are : %d\n",n);
}