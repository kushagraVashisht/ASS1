#include<stdio.h>
#include<stdlib.h>
void int_divide(int numerator,int denominator,int *quotient,int *remainder);
int main()
{
int numerator,denominator,quotient,remainder;
printf("enter the numerator: ");
scanf("%d",&numerator);
printf("enter the denominator: ");
scanf("%d",&denominator);
int_divide(numerator,denominator,&quotient,&remainder);
printf("the quotient and remainder are: %d %d\n",quotient,remainder);
return 0;
} 





void int_divide(int numerator,int denominator,int *quotient,int *remainder)
{
	*quotient = numerator/denominator;
	*remainder = numerator%denominator;
}