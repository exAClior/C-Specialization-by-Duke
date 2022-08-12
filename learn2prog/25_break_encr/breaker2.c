#include "stdio.h"
#include "stdlib.h"

int main(int argc, char **argv) {
  if (argc < 2) {
    printf("Need to provide filename\n");
    return EXIT_FAILURE;
  }

  FILE *fptr = fopen(argv[1], "r");
  int c;
  while ((c = fgetc(fptr)) != EOF) {
    printf("%c", c);
  }
  return EXIT_SUCCESS;
}
