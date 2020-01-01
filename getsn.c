#include "getsn.h"

// Return Value:
//   -2:       Input line has EOF and is too long.
//   EOF (-1): Input line has EOF. Do not get lines any more.
//   0:        Input line without EOF is too long.
//   >= 1:     Get a line successfully.
int getsn(char s[], int n)
{
	int i;
	int c, d;
	int rtn = -2;

	for (i = 0; i < n; i++) {
		c = getchar();

		if (c == '\n') {  // a line ends with '\n'
			s[i] = '\0';
			rtn = i + 1;
			break;
		}

		if (c == EOF) {  // a line ends with EOF
			s[i] = '\0';
			rtn = EOF;
			break;
		}

		if (i == n - 1) {  // too long line
			for (;;) {  // clear the buffer
				d = getchar();
				if (d == '\n' || d == EOF) {
					break;
				}
			}

			if (d == '\n') {
				rtn = 0;
			} else if (d == EOF) {
				rtn = -2;
			}

			break;
		}

		s[i] = c;
	}

	return rtn;
}
