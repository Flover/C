CFLAGS = -Wall

main: 
	gcc -c -Wall main.c lib.c
	cc -Wall main.o lib.o
clean:
	rm *.o *.out *.c~
test: a.out
	echo "5 7 1 10 6 4">1.txt
	echo "123 0 8 52 78 66">2.txt
	echo "444 666 0 333 1000 999">3.txt
	./a.out<1.txt
	./a.out<2.txt
	./a.out<3.txt
	rm *.txt
