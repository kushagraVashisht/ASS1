#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,k;
	for(i=0;i<3;i++) // number of lines.
	{
		for(j=0;j<3-i-1;j++) // limiting value for the spaces.
		{
			printf(" ");
		}
		for(k=0;k<=i;k++) // printing the stars.
		{
			printf("*");
		}
		printf("\n");
		}
return 0;
}
	
