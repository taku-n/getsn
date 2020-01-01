// 読んだ値が EOF であったなら
// それ以上読んではいけない

#include <stdio.h>

int main(void)
{
	int c;

	for (;;) {
		c = getchar();
		if (c == EOF) {
			printf("EOF\n");
			continue;
		}
		putchar(c);
	}

	return 0;
}
