#ifndef GETSN_H
#define GETSN_H

#include <stdio.h>

// Read a line from stdin.
// The max length of the line is n - 1.
// The characters returned are always terminated with '\0'.
char *getsn(char s[], int n);

#endif
