#include <stdio.h>
#include <stdlib.h>
#define MAXCHARS 50
int main()
{
	int i=0,j=0,c,rows=-1 ,columns=1 ;
	char a[1000][50] ;
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
printf("%s\n",a[6]);
for(i = 
}



/*
-READS THE INPUT STREAM AND BUILDS A 2D ARRAY OF STRINGS
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

    
    
   
    
    
    
    
    
    
    
    
    
    
    
    
    
    if(c == '\t' && rows == 0)
		{
			columns+=1;
		}
    
    
    
    
    
    
    
    
    FILE *file;
    file = fopen("test0.txt", "r");

    while(fgets(line, sizeof line, file)!=NULL) {
        printf("%s", line);
        programs[i]=malloc(sizeof(line)); 
        strcpy(programs[i], line);
        i++;
        rows++;
    }
    

    //check to be sure going into array correctly 
    for (j=0 ; j<rows+1; j++) {
    	for (i=0; i < strlen(a[j]); i++) {
    		printf("\n%c", a[j][i]);
    	}
    }

    fclose(file);
    return 0;
}

    while((c =getchar())!=EOF)
	{
		if(c == '\t')
		{
			j+=1;
		}	
		if(c == '\n')
		{
			j=0;
			i+=1;
		}
		else if((c != 't') && (c != '\n'))
		{
			a[i][j] = c;
			j++;
		}

	}
    
    
*/


