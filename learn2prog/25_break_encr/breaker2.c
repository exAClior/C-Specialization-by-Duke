#include "ctype.h"
#include "stdio.h"
#include "stdlib.h"

int find_most_freq(int freq[], int total_count);
int main(int argc, char **argv) {
  if (argc < 2) {
    printf("Need to provide filename\n");
    return EXIT_FAILURE;
  }

  FILE *fptr = fopen(argv[1], "r");
  int c;
  int freq[26] = {0};
  int char_count = 0;
  while ((c = fgetc(fptr)) != EOF) {
    if (isalpha(c)) {
      char_count += 1;
      freq[c - 'a'] += 1;
    }
  }

  int most_freq = find_most_freq(freq, char_count);
  int res = (most_freq - 'e' + 'a' + 26) % 26;

  printf("%d\n", res);
  FILE *fptr2 = fopen(argv[1], "r");
  while ((c = fgetc(fptr2)) != EOF) {
    if (isalpha(c)) {
      printf("%c", 'a' + (c - 'a' - res + 26) % 26);
    } else {
      printf("%c", c);
    }
  }
  return EXIT_SUCCESS;
}

int find_most_freq(int freq[], int total_count) {
  int idx = 0;
  float max_freq = 0;
  // I know for sure the size of array
  for (int i = 0; i < 26; i++) {
    if (max_freq < freq[i] / (float)total_count) {
      max_freq = freq[i] / (float)total_count;
      idx = i;
    }
  }

  return idx;
}
