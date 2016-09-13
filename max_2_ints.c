#include <stdio.h>
#include <stdlib.h>

int max_2_ints(int first, int second);
void error(int code);

int
main(int argc, char **argv) {
    int n, x;

    printf("Type first number: ");
    if (scanf("%d", &n) != 1) {
        error(0);
    }
    printf("Type second number: ");
    if (scanf("%d", &x) != 1) {
        error(0);
    }

    printf("Bigger number is %d\n", max_2_ints(n, x));

    return 0;
}

int
max_2_ints(int first, int second) {
    if (first > second) {
        return first;
    }
    return second;
}

void
error(int code) {
    if (code == 0) {
        printf("Illegal input\n");
    }
    exit(EXIT_FAILURE);
}