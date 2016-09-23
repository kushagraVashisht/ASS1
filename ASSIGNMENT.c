/*
****code written by kushagra vashisht,
	student id 730633****
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_arr();
void insertion_sort(int pos);
int start=1;
int mygetchar();
void rowswap();
void sort_int_array(int A[], int n);
int i=0,j=0,k=0,rows=-1,columns=1,c,cmdinp1,cmdinp2;
	char a[1000][30][50];
	int array[30];int arguments;
int main(int argc, char *argv[])
{
	arguments=argc-1;
/* i=rows;j=columns;k=characters. */
/* iterate over each character, reads the input. */
	while((c=mygetchar())!=EOF)
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
/* generate the required report */
printf("Stage 1 Output\n");
printf("input tsv data has %d rows and %d columns\n", rows, columns);
printf("row %d is:\n", rows);
j=0;
	for(i=0;i<columns;i++)
	{
		j++;
		printf("%d: ",j);
		
		printf("%-10s%s\n",a[0][i],a[rows][i]);
	}
printf("\n");
for(i=1;i<argc;i++){
	array[i-1]=atoi(argv[i])-1;	
}

insertion_sort(array[0]);

/* generate the required output for stage 2 */
printf("\nStage 2 Output\n");
j=0;
int positions[3];
positions[0]=2;
positions[1]=(rows+2)/2;
positions[2]=rows+1;
	for(i=0;i<3;i++)
	{
		printf("row%d is:\n",positions[i]-1);
		for(j=0;j<columns;j++)
		{
			printf("%5d: %-10s%s\n",j+1,a[0][j],a[positions[i]][j]);
		}
		printf("\n");
	}
	return 0;
}

/* used to replace the getchar() function to work with unix machines. */
int mygetchar() {
		int c;
		while ((c=getchar())=='\r') {
		}
		return c;
	}
//============================STAGE 1 ENDS HERE===============================//


/* swaps 2 rows based on the user input. */ 
void compare(int i, int j, int start){
	int x;
	char t[columns][50];
		for(x=0;x<columns;x++){
			strcpy(t[x],a[i][x]);
		}
		int z;
	for(z=start;z<arguments;z++){
		int pos = array[z];
		
/*if the 2nd row is smaller then swap. */		
		if(strcmp(t[pos],a[j][pos])<0){
				for(k=0;k<columns;k++)
				{
					strcpy(a[i][k],a[j][k]);
				}
				for(k=0;k<columns;k++)
				{
					strcpy(a[j][k],t[k]);
				}
				break;
		}
		if(strcmp(t[pos],a[j][pos])>0){
		break;
		}
	}
}

/* using insertion sort to sort according to the rows */
void insertion_sort(int pos){
	
	for(i=2;i<=rows+1;i++){
		char temp[columns][50];
		for(j=0;j<columns;j++){
			strcpy(temp[j],a[i][j]);
		}
		int j=i-1;
/* if the entries in the first arg column match, */
/*	go to the next column arg column. */		
		if(strcmp(temp[pos],a[j][pos])==0){
		while(strcmp(temp[pos],a[j][pos])==0 && j>=1)
		{
			compare(j+1,j,start);
			j--;
		}
		}
		else
		{
			
			while(strcmp(temp[pos],a[j][pos])<0 && j>=1)
			{
				
				for(k=0;k<columns;k++)
				{
					strcpy(a[j+1][k],a[j][k]);
				}
				--j;
			}
			for(k=0;k<columns;k++)
				{
					strcpy(a[j+1][k],temp[k]);
				}				
			while(strcmp(a[j+1][pos],a[j][pos])==0 && j>=1)
			{
				compare(j+1,j,start);
				j--;
			}
		}
	}

}
/*function used to print out the row. */
void print_arr(){
for(i=0;i<=rows+1;i++){
	for(j=0;j<columns;j++){
		printf("%s\t",a[i][j]);
}
printf("\n");
}
}
//============================STAGE 2 ENDS HERE===============================//


