#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int n, divisor, isprime;
	printf("Enter a number n: ");
	if (scanf("%d", &n) != 1) 
	{
		printf("Incorrect input\n");
		exit(EXIT_FAILURE);
	}
	/* a value for n has been read */
	isprime = 1;
	for (divisor=2; divisor*divisor<=n; divisor++) 
	{
		if (n%divisor==0) 
		{
			isprime = 0;
			break;
		}
	}
	if (isprime == 1) 
	{
		printf("%d is a prime number\n", n);
	} 
	else 
	{
		printf("%d = %d * %d\n", n, divisor, n/divisor);
	}
	return 0;
}


/* checking for the prime number and printing out the next prime number
-if the number entered % 2 == 0 and the number is not 2;
firstly make it an odd number, add 1.
-check if the number we get after adding 1 is not a prime number.
-if not, increment by 2 to get to the next odd number.this should be our prime number.
-if the number is 2 then print that its a prime number




program just to tell whether the input is prime or not */





#include <stdio.h>
int isprime(int n);
int main(int argc, char *argv[]) {

int n; printf("Enter a number n: ");
scanf("%d", &n);
if (isprime(n)) {
printf("%d is a prime number\n", n); 
} 
else 
{
printf("%d is not a prime number\n", n); return 0;
}
/* Determine whether n is prime. */ 
int isprime(int n) 
{
int divisor; 
if (n<2) 
{
return 0;
}
for (divisor=2; divisor*divisor<=n; divisor++)
{
	if (n%divisor==0)
	{ /* factor found, so can’t be prime */ 
		return 0;
	}
} /* no factors, so must be prime */ 
return 1;
}
}
