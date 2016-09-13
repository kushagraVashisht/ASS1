#include <stdio.h>
#include <stdlib.h>
int power(int x, int y);
int main()
{
	int num1,num2;
	printf("enter the first number: ");
	if(scanf("%d",&num1) == 0)
	{
			printf("please enter a valid input");
	}
	printf("enter the number to be raised: ");
	if(scanf("%d",&num2) == 0)
	{
		printf("please enter a valid input");
	}
		printf("first number raised to the second number is: %d\n",power(num1,num2));	
return 0;
}



int power(int x, int y)
{
	int sum=1;
	while(y > 0)
	{
		sum *= x;
		y--;
	}
	return sum;
}