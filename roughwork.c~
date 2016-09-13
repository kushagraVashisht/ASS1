#include<stdio.h>
#include<stdlib.h>
int main()
{
int prev1,prev2,next,sum=0,i,days;
printf("please enter the number of days: ");
scanf("%d",&days);
prev1=1;
prev2=1;
next=prev1+prev2;
for(i=0;i<=days;i++)
{
	prev2=prev1;
	prev1=next;
	sum+=next;
}
printf("sum is : %d",sum);
}