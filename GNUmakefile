CC := gcc

all: libgetsn.a

libgetsn.a: getsn.o
	ar rc libgetsn.a getsn.o

getsn.o: getsn.h getsn.c
	$(CC) -Wall -c -o getsn.o getsn.c
