// 読んだ値が EOF であったなら
// それ以上読んではいけない

#include <stdio.h>

#include "getsn.h"

#define SIZE 4

int main(void)
{
	char s[SIZE];
	int r;
	int rtn;

	for (;;) {
		r = getsn(s, sizeof(s));

		if (r == -2) {
			rtn = 1;
			break;
		} else if (r == EOF) {
			printf("%d: %s\n", r, s);
			rtn = 0;
			break;
		} else if (r == 0) {
			continue;
		}

		printf("%d: %s\n", r, s);
	}

	return rtn;
}
