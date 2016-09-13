#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,i,j;
printf("enter the number of lines to be printed: ");
scanf("%d",&n);
for(i=1;i<=n;i++) // checks the lines.
{
	for(j=1;j<=i;j++) // checks the stars.
	{
		printf("*");
	}
printf("\n");
}
return 0;
}