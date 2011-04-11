CFLAGS = -Wall

main: main.c lib.c lib.h
	gcc -c main.c lib.c
	cc main.o lib.o

clear: *.out *.o
	rm -rf *.out *.o *.*~

test: a.out
	./a.out paliwo
