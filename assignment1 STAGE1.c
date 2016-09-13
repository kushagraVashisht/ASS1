#include <stdio.h>
#include <stdlib.h>
#define MAXCHARS 50
int main()
{
	int columns=0,rows=0,i,j;
	char a[1000][50], c ;
	while((c =getchar())!=EOF)
	{
		if(c == '\t' && rows == 0)
		{
			columns+=1;
		}
		if(c == '\n')
		{
			rows+=1;
		}
		/*for(i=0;i<=columns;i++)
		{
			for(j=0;j<=rows;j++)
			{
				a[i][j] = c;
			}
		}
*/	

printf("columns and rows are: %d %d\n",columns,rows);
	    }
}

		/*-READS THE INPUT STREAM AND BUILDS A 2D ARRAY OF STRINGS
-AT MOST 1000 INPUT LINES AND EACH LINE HAS 30 COLUMNS WITH ATMOST 50 CHARACTERS
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
*/


