CC = gcc
CFLAGS = -Wall -ggdb -std=c18

factorial: factorial.c
	$(CC) $(CFLAGS) factorial.c -o factorial

test: factorial
	./factorial

clean:
	-rm factorial