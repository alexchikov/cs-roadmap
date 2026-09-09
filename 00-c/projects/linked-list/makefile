build:
	gcc -std=c17 -Wall -Wextra -fsanitize=address,undefined -Wpedantic list.c main.c -o main

test:
	gcc test.c list.c -o test
	./test
	rm -f test

run:
	./main

clean:
	rm -f main

all: build run clean