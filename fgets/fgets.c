#include <stdio.h>

#define SIZE 4

int main(void)
{
    char s[SIZE];
    int c;

    if (fgets(s, sizeof(s), stdin) == NULL) {
        return 1;
    }

    printf("%X", s[0]);
    printf("%s", s);

    c = getchar();

    printf("%X", c);
}
