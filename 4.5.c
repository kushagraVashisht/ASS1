#include<stdio.h>
#include<stdlib.h>
int main()
{
int next;
printf("enter the numbers: ");
while(scanf("%d",&next)==1)
{
	if(next <1 || next > 70)
	{
		printf("please enter the input between 1 and 70");
	}
	else
	{
		printf("%d |",next);
	for(int i=0;i<=next;i++)
	{
		printf("*");
	}
printf("\n");
}
}
}