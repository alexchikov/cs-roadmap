build-all:
	gcc -o ex1.o ex1.c
	gcc -o ex2.o ex2.c
	gcc -o ex3.o ex3.c
	gcc -o ex4.o ex4.c
	gcc -o ex5.o ex5.c
	gcc -o ex6.o ex6.c

run-first: build-all
	valgrind --leak-check=full ./ex1.o
	rm -f *.o

run-second: build-all
	valgrind --leak-check=full ./ex2.o
	rm -f *.o

run-third: build-all
	valgrind --leak-check=full ./ex3.o
	rm -f *.o

run-fourth: build-all
	valgrind --leak-check=full ./ex4.o
	rm -f *.o

run-fifth: build-all
	valgrind --leak-check=full ./ex5.o
	rm -f *.o

run-sixth: build-all
	valgrind --leak-check=full ./ex6.o
	rm -f *.o