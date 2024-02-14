CC = gcc
CFLAGS = -Wall -std=c18 -ggdb

factorial: factorial.c
	$(CC) $(CFLAGS) factorial.c -o factorial

test: factorial
	./factorial

clean:
	-rm factorial *.o

.PHONY: clean test