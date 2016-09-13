#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,j,k,n;
printf("enter: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	for(j=i;j>=0;j--)
	{
		printf(" ");
	}
	for(k=0;k<=n-i-1;k++)
	{
		printf("*");
	}
	printf("\n");
}
return 0;
}
