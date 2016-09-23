/*
****code written by kushagra vashisht,
	student id 730633****
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i=0,j=0,k=0,rows=-1,columns=1,c;
	char a[1000][30][50];
/*i=rows;j=columns;k=characters. */
/* iterate over each character, reads the input. */
	while((c=getchar())!=EOF)
	{
		if(c == '\n')
		{
		/*if c is equal to the newline character then i increases by 1, 
		 columns and character are set to 0, then all the characters are 
		 converted into a string */
			a[i][j][k] = '\0';
			rows+=1;
			i++;
			j=0;
			k=0;
				
		}
		if(c == '\t')
		{
		/*if c is equal to the tab character then we calculate the row number 
		just for the first row,character count is set to 0 after each 
		tab character, each character is converted into a string. */
			if(rows == 0)
			{
				columns+=1;
			}
			
				a[i][j][k] = '\0';
				j++;
				k=0;	
			}
		
		/*if the character is neither a tab character or a newline character, 
		then just append the character to the array. */
		if(c !='\t' && c !='\n')
		{	
		
			a[i][j][k] = c;
			k++;
		}
	}
printf("%d %d\n",rows,columns);

/* generate the required report */
j=0;
	for(i=0;i<columns;i++)
	{
		j++;
		printf("%d: ",j);
		
		printf("%-10s%s\n",a[0][i],a[rows][i]);
	}
}



