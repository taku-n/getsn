#ifndef GETSN_H
#define GETSN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *getsn(char s[], int n);
// Read a line from stdin.
// The max length of the line is n - 1.
// The characters returned are always terminated by '\0'.
//
// When n is 4:
//
//           fgets()
// "\n"     ========> "\n\0"          => "\0\0"   => "\0"
// "h\n"    ========> "h\n\0"         => "h\0\0"  => "h\0"
// "ho\n"   ========> "ho\n\0"        => "ho\0\0" => "ho\0"
// "hog\n"  ========> "hog\0" + "\n"  => "hog\0"  => "hog\0"
// "hoge\n" ========> "hog\0" + "e\n" => NULL     => NULL
//
// "hog\0"  ========> ?

#endif
