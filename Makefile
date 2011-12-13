# Makefile

CC=gcc
CFLAGS=-O0

.PHONY: all clean

all: fail

fail: fail.o
	$(CC) $(CFLAGS) -o $@ $^

fail.o: fail.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f fail.o fail
