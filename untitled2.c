#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define MAXCHARS 50
int main()
{
	int i=0,j=0,c,rows=-1 ,columns=1,count,numbering,count2=0,tabs=0;
	char a[1000][50];
	while((c = getchar())!=EOF)
	{
		if(c != '\n')
		{ 
			a[i][j] = c;
			j++;
		}
		if(c == '\t' && rows == 0)
		{
			columns+=1;
		}
		if(c == '\n')
		{
			rows+=1;
			i++;
			j=0;
			a[i][j] = c;
		}
		if(c != '\t' && c != '\n')
		{
			a[i][j] = c;
		}
}
printf("columns and rows are: %d %d\n",columns,rows);
//printf("%c\n",a[rows][0]);
count=0,numbering=2,count2=0;
printf("1: ");
for(j=0;j<MAXCHARS;j++)
		{	
			if(a[0][j] != '\t')
			{
				printf("%c",a[0][j]);
				
			}
			if(a[0][j] == '\t')
			{
				printf("\t");
				
				for(i=count;i<MAXCHARS;i++)
				{
					count++;
					if(a[rows][i] != '\t')
					{
						printf("%c",a[rows][i]);
					}
					if(a[rows][i] == '\t')
					{
						printf("\n");
						printf("%d: ",numbering++);
						break;
					}
				}
			}
		}
printf("%d: ",columns);
for(i=count;i<strlen(a[rows]);i++)
{
		if(a[0][i] != '\n')
		{
			printf("%c",a[0][i]);
			//printf("\n");
		}
		else
		{
			printf("\t");
		}
}
}
/*if(a[rows][i] != '\t')
	{
		printf("%c",a[rows][i]);
		count++;
	}

printf("\n\n");
return 0;
}
*/

/*
-READS THE INPUT STREAM AND BUILDS A 2D ARRAY OF STRINGS
-AT MOST 1000 INPUT LINES AND EACH LINE HAS 30 COLUMNS WITH ATMOST 50 CHARACTERS.
-FOR THE OUTPUT 
mac: ./ass1-soln < test0.tsv 
    Stage 1 Output
    input tsv data has 6 rows and 4 columns
row 6 is:
   1: Event     Cycling
   2: Gender	Womens
   3: Country	New Zealand
   4: Medal		third: bronze

INPUT IS GONNA BE LIKE:

	Event\tGender\tCountry\tMedal\n
    Swimming\tWomens\tNew Zealand\tfirst: gold\n
    Swimming\tWomens\tChina\tsecond: silver\n
    Swimming\tWomens\tIndonesia\tthird: bronze\n
    Cycling\tWomens\tChina\tfirst: gold\n
    Cycling\tWomens\tNew Zealand\tsecond: silver\n
    Cycling\tWomens\tNew Zealand\tthird: bronze\n
    EOF 
 
    
    SOMEWHAT FINAL
    
    for(j=0;j<MAXCHARS;j++)
		{	
			if(a[0][j] != '\t')
			{
				printf("%c",a[0][j]);
			}
			if(a[0][j] == '\t')
			{
				printf("\t");
				for(i=0;i<MAXCHARS;i++)
				{
					if(a[rows][i] != '\t')
					{
						printf("%c",a[rows][i]);
					}
					if(a[rows][i] == '\t')
					{
						printf("\n");
						break;
		
					}
				}
			}
		}
}
    
  
	if(c != '\n')
		{
			count2++;
			if(c =='\t')
			{
				tabs+=1;
				if(tabs == columns - 1)
				{
					break;
				}
			}
		}
	}
    
    */
		
     
    
    
   
    
    
    
    
    
    
    
    
    
 