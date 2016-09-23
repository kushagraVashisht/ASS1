#include<stdio.h>
#include<stdlib.h>
#define F_PATH "/Users/ritusharma/Desktop/UNIMELB/FOUNDATIONS OF ALGORITHMS/PROGRAMS/test0.tsv"

int main()
{
	FILE *fin = NULL;			   
	char temp;						
	char ch[100][200];				
	char header[15][100];		    
	char lastline[15][100];			
	int i=0,j=0,k=0;					    
	int  rownum=0,colnum=1;			
	
	fin = fopen(F_PATH,"r");			
	
	if (fin == NULL){
		printf("Warning:this file point is null");
	}
	else{
	    temp = fgetc(fin);
		while(temp != EOF)		
		{

			while(temp != '\n')					
			{
	     		ch[rownum][i]= temp;			
//				printf("%c",ch[rownum][i],rownum,i);					
				if(temp == '\t' && rownum ==0)				
				{
					colnum++;
				}
				temp = fgetc(fin);				
				i++;
			}

			if(temp == '\n')					
			{
				ch[rownum][i] = '\0';
//				printf("%c rownum: %d  colnum:%d \n",ch[rownum][i],rownum,i);					
				temp = fgetc(fin);				
				rownum++;					    
				i=0;
			}							
		}
	
	}
	

	fclose(fin); 


	while(j<rownum)
	{
		while(ch[j][k] != '\0')
		{
			printf("%c",ch[j][k]);
			k++;
		}
		k=0;
		printf("\n");
			j++;
	}


j=0;	

for(i=0;i<colnum-1;i++)
{
	k=0;
	while(ch[0][j] !=' ')
	{
		header[i][k] = ch[0][j];
//		printf("%c",ch[0][j]);
		j++;
		k++;
	}
	header[i][k] = '\0';
	j++;
}



for(i=0;i<colnum;i++)
{
	j=0;
	while(header[i][j] != '\0')
	{
		printf("%c  %d  %d  \n",header[i][j],i,j);
		j++;
	}
		printf("\n");
}

	printf("Stage 1 Output  \n");
	printf("input tsv data has %d rows and %d columns \n", rownum-1 , colnum);
	printf("row %d is: \n", rownum-1);
//	for(int j=0;j<colnum;j++)
//	{
//		printf("%d: ", j);
//
//	    printf("\n");
//	}
	
	while(1);
	return 0;

}

