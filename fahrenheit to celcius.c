#include<stdio.h>
int main()
{
	float ftemp,tcelc;
	printf("please enter the temperature in fahrenheit: ");
	scanf("%f",&ftemp);
	tcelc=(ftemp-32)*(5.0/9.0);
	printf("the temp in celcius is: %.1f\n",tcelc);
}

