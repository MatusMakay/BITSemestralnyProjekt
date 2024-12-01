#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <stdio.h>

void winner()
{
    printf("that wasn't too bad now, was it? @ %d\n", time(NULL));
}

int main(int argc, char **argv)
{
    char *a, *b, *c;

    a = malloc(32);
    b = malloc(32);
    c = malloc(32);
    // save copy
    strncpy(a, argv[1], 31);
    strncpy(b, argv[2], 31);
    strncpy(c, argv[3], 31);

    // null terminate
    a[31] = '\0';
    b[31] = '\0';
    c[31] = '\0';

    free(c);
    free(b);
    free(a);

    printf("dynamite failed?\n");
}