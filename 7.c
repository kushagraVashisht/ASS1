#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void swap(int *p1,int *p2);
int main()
{
	int num,i,count=0,j;
	char w[strlen(num)];
	printf("enter as many as 1000 values: ");
	scanf("%d",&num);
	while((c=getchar())!=EOF)
	{
		w[count]=c;
		count++;
	}
	for(i=1;i<sizeof(w);i++)
	{
		for(j=i-1;j>=0 && w[j+1] < w[j];j--)
		{
			swap(&w[j+1],&w[j]);
		}
	}
printf("the sorted array is : %d",w);
void swap(int *p1,int *p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
