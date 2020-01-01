CC := clang-9

all: libgetsn.a

libgetsn.a: getsn.o
	ar rc libgetsn.a getsn.o

getsn.o: getsn.h getsn.c
	$(CC) -Wall -c -o getsn.o getsn.c

getsn_test: getsn_test.c libgetsn.a
	$(CC) -Wall -o getsn_test getsn_test.c -L. -lgetsn

clean:
	-rm getsn.o
