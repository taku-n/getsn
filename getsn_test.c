#include <stdio.h>
#include <stdlib.h>

#include "getsn.h"

#define SIZE 4

int main(void)
{
    char s[SIZE];

    for (;;) {
        if (printf("%s\n", getsn(s, sizeof(s))) < 0) {
            exit(EXIT_FAILURE);
        }
    }

    exit(EXIT_SUCCESS);
}
