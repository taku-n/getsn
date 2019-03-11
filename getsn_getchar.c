#include "getsn.h"

char *getsn(char s[], int n)
{
    int i;
    int c;

    clearerr(stdin);

    for (i = 0; i < n; i++) {
        c = getchar();

        if (c == '\n') {  // a line ends with '\n'
            s[i] = '\0';
            break;
        }
        
        if (c == EOF) {  // error or a line ends with EOF
            if (ferror(stdin)) {
                fprintf(stderr, "Error (Code: %d)\n", ferror(stdin));
                s = NULL;
            } else {
                s[i] = '\0';
            }
            break;
        }
        
        if (i == n - 1) {  // too long line
            s = NULL;
            break;
        }

        s[i] = c;
    }

    return s;
}
