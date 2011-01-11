# Makefile

CC=gcc

.PHONY: all clean

all: fail

fail: fail.o
	$(CC) -o $@ $^

fail.o: fail.c
	$(CC) -c $<	

clean: 
	rm -f fail.o fail
