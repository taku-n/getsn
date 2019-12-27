#include "getsn.h"

char *getsn(char s[], int n)
{
    if (fgets(s, n, stdin) == NULL) {
        s = NULL;
        return s;
    }

    char *nlc = strchr(s, '\n');
    if (nlc) {  // there is a new line character
        *nlc = '\0';
    } else {    // there is not a new line character
        int c = getchar();
        if (c != '\n' && c != EOF) {
            do {
                c = getchar();
            } while (c != '\n' && c != EOF);

            s = NULL;
            return s;
        }
    }

    return s;
}
