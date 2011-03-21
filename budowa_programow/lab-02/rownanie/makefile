comp: main.c helpers.c
	gcc -c main.c helpers.c 
main: main.o helpers.o
	cc main.o helpers.o

clean: *.o *.out *.c~
	rm -rf *.o *.out *.c~

