#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int c;

    do {
        c = getchar();
        printf("0x%02X\n", c);
        printf("%d\n", feof(stdin));
    } while (feof(stdin) == 0);

    exit(EXIT_SUCCESS);
}
