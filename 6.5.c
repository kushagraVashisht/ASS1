#include<stdio.h>
#include<stdlib.h>
void int_sort2(int *p1, int *p2);
int main()
{
int num1,num2,num3;
printf("enter the 3 values: ");
scanf("%d %d %d",&num1,&num2,&num3);
int_sort2(&num1,&num3);
int_sort2(&num1,&num2);
int_sort2(&num2,&num3);
printf("%d %d %d\n",num1,num2,num3);
return 0;
}

void int_sort2(int *p1, int *p2)
{
	int temp;
	if(*p1 > *p2)
	{
		temp = *p1;
		*p1 = *p2;
		*p2 = temp;
	}
}
