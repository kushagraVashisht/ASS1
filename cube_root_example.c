#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
double x,v,sum=0,i;
int average;
printf("enter the value for v: ");
while(scanf("%lf",&v) == 1 && v >= pow(10,-6) && v <= pow(10,6)) 
{
	for(x=1;x<25;x++)
	{
		i=((2*x)+v/(x*x))/3;
		sum+=i;
	}
}
average=sum/25;
printf("the cube root of the function is : %d",average);
}