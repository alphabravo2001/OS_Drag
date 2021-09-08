#include <stdio.h>  // Needed for printf

#include "substr.h"

int main(int argc, char *argv[]) {
  int pos;
  printf("Check whether a string contains a substring:\n");
  if (argc != 3) {
    printf("Usage: program string_to_search substring\n");
    return -1;
  }

  pos = substr(argv[1], argv[2]);
  if (pos >= 0) {
    printf("The string '%s' contains the substring '%s' at position %d.\n",
           argv[1], argv[2], pos);
  } else {
    printf("The string '%s' does not contain the substring '%s'\n", argv[1],
           argv[2]);
  }
  return 0;
}
