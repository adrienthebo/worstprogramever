#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Counts from 1 to n without loops or conditionals.
 * In the worst way possible.
 */

int main(int argc, char **argv) {

  int c = atoi(argv[1]);
  char d[4];
  sprintf(d, "%d", c - 1);

  char *next = malloc(strlen(argv[0]) + 1 + strlen(d));
  sprintf(next, "%s %s", argv[0], d);

  int e = 1 / c; //This is the really annoying part
  system(next); //But this is pretty annoying too
  free(next);
  if(fork() == 0) {
	printf("OH NOOOOOOOOOOOO\n");
  }
  else {
	fork();
  }
  printf("%d\n", c);
}

