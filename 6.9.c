#include<stdio.h>
#include<stdlib.h>
int try_one_coin(int *cents,int coin);
void print_change(int cents);
int round_to_5(int cents);

int main()
{
int c,q,remainder;

printf("enter the number of cents: ");
if(scanf("%d",&c)!=1)
{
	printf("enter a valid input\n");
}
printf("number of coins: ");
if(scanf("%d",&q)!=1)
{
	printf("enter a valid input\n");
}
printf("the denomination is: %d\n",try_one_coin(&c,q));
printf("the number of coins required are: %d",print_change(c));
remainder = c % q;
return 0;
}

int try_one_coin(int *cents,int coin)
{
	int denomination,remainder;
	denomination = *cents / coin;
	
	return(denomination);
}


int round_to_5(int cents)
{
	if(cents % 10 == 0 || cents % 10 == 5)
	{
		printf("the cents are rounded off");
	}
	if(cents % 10 > 0 && cents % 10 < 3)
	{
		cents = cents - (cents % 10);
	}
	if(cents % 10 == 3)
	{
		cents = cents + 2;
	}
	if(cents % 10 == 4)
	{
		cents = cents + 1;
	}
	return cents;
}

void print_change(int cents)
{
	int i,d200,d100,d50,d20,d10,d5;
	int coins[6]={200,100,50,20,10,5};
    for (i=0;i<6;i++)
    {
        printf("coin denominations equal: %d X %d",coins[i],try_one_coin(&cents,coins[i]));
    }
    if (cents==0)
    {
    printf("enter a valid input");	
    }
    printf("the denominations for the 200 cents coin is : %d",try_one_coin(&c,200));
 }
 
 
/*CONDITIONS TO BE KEPT IN MIND AND HOW THE FUNCTION IS SUPPOSED TO WORK
-GET THE CENTS
-GET THE DENOMINATION OF EACH COIN USING TRY_ONE_COIN AND ROUND_TO_5.
-AS THE 1C AND 2C COINS AREN'T ALLOWED IN THIS CASE SO WE'LL JUST TAKE THE CENTS
,COUNT THE DENOMINATION AND IF THE CENTS LEFT IS LESS THAN 5 CENTS THEN JUST USE THE ROUND_TO_5 TO REOUND OFF 
THE DENOMINATION TO WHATEVER CENTS ACCORDINGLY.