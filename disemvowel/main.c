#include <stdio.h>
#include <stdlib.h>

#include "disemvowel.h"

int main(int argc, char* argv[]) {
  char* line;

  //store disemvowel output in a var so we can free it and avoid mem leak
  char* holder;
  size_t size;

  size = 100;
  line = (char*) malloc (size + 1);

  while (getline(&line, &size, stdin) > 0) {
    holder = disemvowel(line);
    printf("%s\n", holder);
    free(holder);
  }

  free(line);
}
