#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Author: I won't put my name on this unspeakable monstrosity
 *
 * Counts from 1 to n without loops or conditionals.
 * In the worst way possible.
 */

int main(int argc, char **argv) {

  int c = atoi(argv[1]);
  char d[4];
  sprintf(d, "%d", c - 1);

  char *next = malloc(strlen(argv[0]) + 1 + strlen(d));

  strcat(next, argv[0]);
  strcat(next, " ");
  strcat(next, d);

  int e = 1 / c; //This is the really annoying part
  e = e & 0;
  c = e | c;
  system(next); //But this is pretty annoying too
  free(next);

  printf("%d\n", c);
}

