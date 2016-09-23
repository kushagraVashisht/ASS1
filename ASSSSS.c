/*
solution written by kushagra vashisht,
student id: 730633
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_CHARS 50
#define MAX_LINES 1000
int
main() {
 
	
	int rows=-1, columns=1, i=0, j=0, final_row=0, count1=1, count2=0;
	int c, idx, i1, i2;
	char A[MAX_LINES][MAX_CHARS];
	
			
	/* iterate over characters read from the input */
	while ((c = getchar()) != EOF) {
		
		/* set a value equal to highest row index, to output final row later */
		if (i > final_row){
				final_row = i;
		}
		
		/* increment the inner array for values along the row */
		if (c != '\n'){
			A[i][j] = c;
			j++;
		}
		
		/* increment the outer array for each row by each newline */
		if (c == '\n'){
			i++;
			j=0;
			A[i][j] = c;
			rows ++;
		}
	}
		
	/* find the number of columns */
	for (idx=0; idx < strlen(A[final_row]); idx++){
		if (A[final_row][idx] == '\t'){
			columns++;
		}
	}
	
	/* generate the required report */
	printf("Stage 1 Output\n");
	printf("input tsv data has %d rows and %d columns\n", rows, columns);
	printf("row %d is:\n", rows);
	printf("   1: ");
	
	/* print each column in first row as the header */
	for (i1=0; i1 < strlen(A[0]); i1++)
	{
		if (A[0][i1] != '\t' && A[0][i1] != '\n')
		{
			printf("%c", A[0][i1]);
			} 
			else 
			{
				printf("\t");
				
			
				/* print data in same line as respective header */
				for (i2=count2; i2 <= strlen(A[final_row]); i2++)
				{
					if (A[final_row][i2] != '\t')
					{
						printf("%c", A[final_row][i2]);
						count2++;
					} 
					else 
					{
						printf("\n");
						count2++;
						break;
					}
				}
				
				/* print each subsequent header in the loop */
				count1++;
				printf("%4d: ", count1);
				}
	}
	
	/* print the last data row separate from the main loop */
	printf("\t");
	for (i2=count2; i2 <= strlen(A[final_row]); i2++){
		if (A[final_row][i2] != '\t'){
			printf("%c", A[final_row][i2]);
			count2++;
		}
	}
	printf("\n\n");
}