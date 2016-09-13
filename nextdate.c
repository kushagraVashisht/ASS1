#include <stdio.h>
#include <stdlib.h>
intmain() 
{
	int dd, mm, yyyy,days;
	printf("Enter date in dd/mm/yyyy format: ");
	if (scanf("%d/%d/%d", &dd, &mm, &yyyy) != 3) 
	{
		printf("Input error, please try again\n");
		exit(EXIT_FAILURE);
	} 
/* checking whether the month of feb is leap year or not */
if(mm == 2)
{
	days = 28 + (yyyy % 4 == 0 && (yyyy % 100 != 0 || yyyy % 400 == 0));
	if(dd == days)
	{
		dd = 1;
		mm += 1;
	}
	else
	{
		dd += 1;
	}
if(mm == 1 ||mm == 3 ||mm == 5 ||mm == 7 ||mm == 8 ||mm == 10 ||mm == 12)
{
		days=31;
		if(dd == 31)
			{
				dd=1;
				mm+=1;
			}
		else
			{
				dd += 1;
			}
	}
if(mm == 4 ||mm == 6 ||mm == 9 ||mm == 11)
	{
		days = 30;
		if(dd == 30)
		{
			dd = 1;
			mm += 1;
		}
		else
		{
			dd += 1;
		}
	}
if(dd == 31 && mm == 12)
	{
		dd = 1;
		mm = 1;
		yyyy += 1;
	}
printf("Date tomorrow is %02d/%02d/%04d\n",dd, mm, yyyy);
}
}

/*
checking for leap year
     length_of_year = 365;
     length_of_feb = 28;
     if (year%4==0 && (year%100!=0 || year%400==0)) {
          need to allow for leap years 
         length_of_year += 1;
         length_of_feb += 1;
}

 this is just the case for the normal days.
	we have to take in consideration-
	1.)leap year(februray has 29 days instead of 28)
	2.)make a condition for february to have 28 days as a basis.
	3.)months 1,3,5,7,8,10,12 have 31 days rest have 30 days.
	4.)if the day is 30/31 then the next day is gonna be 1 depending on what month it is.
	5.)the next day to the new year is gonna be 1.
*/
	
/*
used for checking whether the month is leap or not
big method use dfor the case.
if(yyyy%4==0 && (yyyy%100!=0 || yyyy%400==0))
	{
		days = 29;
		if(dd == 29)
		{
				dd = 1;
				mm += 1;
		}
		else
		{
				dd += 1;
		}
	}
	else if(yyyy%4 != 0)
	{
		days=28;
		if(dd == 28)
		{
			dd = 1;
			mm += 1;
		}
		else
		{
			dd+=1;
		}
	}
}
*/