#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MIN(x,y) ((x)<=(y)?(x):(y))
#define MAX(x,y) ((x)>=(y)?(x):(y))
#define TERM_SIZE 999
char term[TERM_SIZE+1];		/* This char array reads terms one by one from input file */
int termLength;

/* This structure holds the term, its document count and term frequency for each document where it appears */
typedef struct invertedindexTable {
	char *term;
	int ft, *ftd[2];
} Index;
Index *indexTable;
int totalTerms, termsCapacity;

/* Initializes indexTable with space for just 1 term */
void initializeindexTableArray() {
	termsCapacity = 1;
	totalTerms = 0;
	indexTable = (Index*) malloc(termsCapacity * sizeof(Index));
}

/* Allocates double space for indexTable if it is full otherwise simply returns */
void sufficientSizeindexTableArray() {
	if(totalTerms == termsCapacity) {
		termsCapacity = termsCapacity << 1;
		indexTable = (Index*) realloc(indexTable, termsCapacity * sizeof(Index));
	}
}

/* Performs memory allocation for each term. len is its length and ft is the count of documents it appears in. */
void allocateindexTableElement(int len, int ft) {
	indexTable[totalTerms].term = (char*) malloc(len * sizeof(char));
	indexTable[totalTerms].ftd[0] = (int*) malloc(ft * sizeof(int));
	indexTable[totalTerms].ftd[1] = (int*) malloc(ft * sizeof(int));
}

/* Returns true if passed character is a lower case letter */
int isValidChar(char c) {
	return c>='a' && c<='z';
}

/* Reads the next string from passed file stream, stores it in passed char pointer and returns its length */
int readString(FILE *f, char *str) {
	char c; int len = 0;
	while( !isValidChar(c = fgetc(f)) ) if(c == EOF) return len;
	do { str[len++] = c; } while( isValidChar(c = fgetc(f)) );
	str[len++] = '\0';
	return len;
}

/* Returns true if passed character is a valid numeral or a plus or minus sign */
int isValidNum(char c) {
	return ((c>='0' && c<='9') || c=='-' || c=='+');
}

/* Reads and returns the next integer from passed file stream */
int readInt(FILE *f) {
	char c; int num=0, sign=1;
	while( !isValidNum(c = fgetc(f)) ) if(c == EOF) return -1;
	if(c == '-') { sign = -1; c = fgetc(f); } else if(c == '+') c = fgetc(f);
	do { num = num*10 + c-'0'; } while( isValidNum(c = fgetc(f)) );
	return num * sign;
}

/* Reads the input file and creates the index table from it */
void buildindexTable(const char *fileName) {
	FILE *f = fopen(fileName, "r");
	if(f == NULL) {
		fprintf(stderr, "Could not read file %s\n", fileName);
		exit(EXIT_FAILURE);
	}
	initializeindexTableArray();
	while(1) {
		termLength = readString(f, term);
		if(termLength == 0) break;
		sufficientSizeindexTableArray();
		int ft = readInt(f);
		allocateindexTableElement(termLength, ft);
		strcpy(indexTable[totalTerms].term, term);
		indexTable[totalTerms].ft = ft;
		int i; for(i=0; i<ft; i++) {
			indexTable[totalTerms].ftd[0][i] = readInt(f);
			indexTable[totalTerms].ftd[1][i] = readInt(f);
		}
		totalTerms++;
	}
}

/* Performs Stage 1 -- basically prints the top and bottom 2 terms with their document frequencies */
void basicimplementation() {
	printf("Stage 1 Output\n");
	if(totalTerms <= 0) {
		printf("index has 0 terms and 0 (d,fdt) pairs\n");
		return;
	} else if(totalTerms <= 1) {
		printf("index has 1 terms and %d (d,fdt) pairs\n", indexTable[0].ft);
		printf("term 1 is \"%s\":\n", indexTable[0].term);
		printf("   ");
		int j, limit = MIN(10, indexTable[0].ft);
		for(j=0; j<limit; j++)
			printf(" %d,%d%s", indexTable[0].ftd[0][j], indexTable[0].ftd[1][j], j==limit-1?"":";");
		printf("\n");
		return;
	}
	int i, count=0;
	for(i=0; i<totalTerms; i++) count+=indexTable[i].ft;
	printf("index has %d terms and %d (d,fdt) pairs\n", totalTerms, count);
	for(i=0; i<2; i++) {
		printf("term %d is \"%s\":\n", i+1, indexTable[i].term);
		printf("   ");
		int j, limit = MIN(10, indexTable[i].ft);
		for(j=0; j<limit; j++)
			printf(" %d,%d%s", indexTable[i].ftd[0][j], indexTable[i].ftd[1][j], j==limit-1?"":";");
		printf("\n");
	}
	for(i=totalTerms-2; i<totalTerms; i++) {
		printf("term %d is \"%s\":\n", i+1, indexTable[i].term);
		printf("   ");
		int j, limit = MIN(10, indexTable[i].ft);
		for(j=0; j<limit; j++)
			printf(" %d,%d%s", indexTable[i].ftd[0][j], indexTable[i].ftd[1][j], j==limit-1?"":";");
		printf("\n");
	}
}

/* Performs binary search to find location of a word in the indexTable. Return -1 if not found */
int Bsearch(char *token) {
	int beg = 0, end = totalTerms-1, mid;
	while(beg<=end) {
		mid = beg + ((end-beg)>>1);
		int cmp = strcmp(indexTable[mid].term, token);
		if(cmp==0) return mid;
		if(cmp<0) beg=mid+1;
		else end=mid-1;
	}
	return -1;
}

/* Convert a string to lower case letters i.e. change upper ones to lower and keep lower ones unchanged */
void MakeLowerCase(char *str) {
	int i; for(i=0; str[i]!='\0'; i++) str[i] = tolower(str[i]);
}

/* This method is used for the Stage 2 of the assessment */
void nextlevelimplementation() {
	char query[TERM_SIZE+1], token[TERM_SIZE+1];
	int i, l;
	while( fgets(query, TERM_SIZE+1, stdin) != NULL) {
		printf("Stage 2 Output\n");
		for(i=0; sscanf(query + i, "%s%n", token, &l) == 1; i = i + l) {
			MakeLowerCase(token);
			int loc = Bsearch(token);
			if(loc==-1) printf("    \"%s\" is not indexed\n", token);
			else {
				printf("    \"%s\" is term %d\n", token, loc+1);
			}
		}
		printf("\n");
	}
}

int main(int argc, char const *argv[])
{
	if(argc != 2) {
		fprintf(stderr, "Usage: %s index_file\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	buildindexTable(argv[1]);
	basicimplementation();
	nextlevelimplementation();
	return 0;
}

/* ALGORITHMS ARE FUN! */
/*-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/