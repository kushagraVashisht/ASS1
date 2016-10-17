/* Break the input up into a sequence of words, and only report
   the unique ones. Uses malloc and realloc to help cope with very
   large input files.
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

#define MAXCHARS 1000    /* max chars per word */
#define INITIAL   100    /* initial size of word array */

typedef char word_t[MAXCHARS+1];
char getword(FILE *fp, int n);
void exit_if_null(void *ptr, char *msg);

int
main(int argc, char *argv[]) {
	int fnum;
	FILE *fp;
	/* process the list of command line arguments */
	for (fnum=1; fnum<argc; fnum++) {
		if ((fp = fopen(argv[fnum], "r")) == NULL) {
			fprintf(stderr, "............failed\n");
		} else {
			fprintf(stderr, "\n");
			getword(fp, INITIAL);
			fclose(fp);
		}
	}
	return 0;
}


int
open(int argc, char *argv[]) {
	word_t one_word;
	char **all_words;
	size_t current_size=INITIAL;
	int numdistinct=0, totwords=0, i, found;
	all_words = (char**)malloc(INITIAL*sizeof(*all_words));
	exit_if_null(all_words, "initial allocation");
	while (getword(one_word, MAXCHARS) != EOF) {
		totwords = totwords+1;
		/* linear search in array of previous words... */
		found = 0;
		for (i=0; i<numdistinct && !found; i++) {
			found = (strcmp(one_word, all_words[i]) == 0);
		}
		if (!found) {
			/* a new word exists, but is there space? */
			if (numdistinct == current_size) {
				current_size *= 2;
				all_words = realloc(all_words, 
					current_size*sizeof(*all_words));
				exit_if_null(all_words, "reallocation");
			}
			/* ok, there is definitely space in array */
			all_words[numdistinct] =
				(char*)malloc(1+strlen(one_word));
			exit_if_null(all_words[numdistinct],
				"string malloc");
			/* and there is also a space for the new word */
			strcpy(all_words[numdistinct], one_word);
			numdistinct += 1;
		}
	}
	printf("Stage 1 Output\n");
	printf("index has %d terms and \n", totwords);
	for (i=0; i<numdistinct; i++) {
		printf("term %d is \"%s\"\n", i+1, all_words[i]);
		free(all_words[i]);
		all_words[i] = NULL;
	}
	free(all_words);
	all_words = NULL;
	return 0;
}

void
exit_if_null(void *ptr, char *msg) {
	if (!ptr) {
		printf("unexpected null pointer: %s\n", msg);
		exit(EXIT_FAILURE);
	}
}



char
getword(FILE *fp, int n){
	char W[INITIAL+1];
	int c;
	int len = 0;
	while ((c=getc(fp)) != EOF){
		/*do nothing here*/
	}
	if (c == EOF) {
		return EOF;
	}
	W[len++] = c;
	while (len<n && (c=getc(fp)) != EOF) {
		W[len++] = c;
	}
	W[len] = '\0';
	return 0;
}