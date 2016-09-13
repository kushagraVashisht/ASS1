#include<stdlib.h>
#include<stdio.h>
int main()
{
int i,j ;
char k ;

printf("       +0  +1  +2  +3  +4  +5  +6  +7\n");
printf("      +--------------------------------\n");
for(i=32;i<=120;i+=8)
{
	printf("%-4d|",i);
	for(j=0;j<=7;j++)
	{
		k=i+j;
		printf("   %c",k);
	}
printf("\n");
}
}