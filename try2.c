#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

#define MAXCHARS 1000    /* max chars per word */
#define INITIAL   100    /* initial size of word array */

typedef struct twodArray{
	
typedef char word_t[MAXCHARS+1];
char getword(FILE *fp, int n);
void exit_if_null(void *ptr, char *msg);
int main(int argc, char *argv[])
{
  FILE *fp;
  char ch;

  if((fp = fopen(argv[ 1 ],"r"))==NULL) {
    printf("Cannot open file.\n");
    exit(1);
  }

  while((ch = fgetc( fp )) != EOF) {
    printf("%c", ch);
  }



