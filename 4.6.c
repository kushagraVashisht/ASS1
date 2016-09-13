#include <stdio.h>
#include <stdlib.h>

int main() {
    int txt, linecnt, chrcnt;
    linecnt = chrcnt = 0;

    printf("Enter Text:\n");

    while((txt=getchar()) != EOF) {
        if (txt == '\n') {
            /* new line */
            linecnt++;
        } else {
            chrcnt++;
        }
    }

    printf("Lines:%8d\nChars:%8d\n", linecnt, chrcnt);


    return 0;
}