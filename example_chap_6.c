#include<stdio.h>
#include<stdlib.h>
#define hi 100
#define lo -100


int read(int hi, int lo, int *ans);
int main()
{
int num,hi,low;
printf("enter the integers: ");
if(scanf("%d",&num) == 0)
{
	printf("enter some integer values: ");
}
int read(hi,low,&ans);
}



int read(int hi, int lo, int *ans)
{
	int num;
	if( num > low && num < hi)
	{
		*ans = num;
		return RETURN_OK;
		break;
	}
return RETURN_ERROR;
}