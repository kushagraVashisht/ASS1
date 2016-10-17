#include <stdio.h> 
#include <stdlib.h>
int main(int argc, char *argv[]) 
{
int fnum;
FILE *fp; 
for (fnum=1; fnum<argc; fnum++) 
{
fprintf(stderr, "Opening %s: ", argv[fnum]); 
if ((fp = fopen(argv[fnum], "r")) == NULL) 
{ 
	fprintf(stderr, "failed\n");
} 
else 
{ 
	fprintf(stderr, "\n"); 
	printf("%s\n", argv[fnum]); 
	fclose(fp);
} 
return 0;
}
}
