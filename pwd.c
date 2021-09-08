#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 10
char msg[SIZE] = "whatever";
char pwd[SIZE] = "secret";

void main (int argc, char *argv[]) {
  if (argc != 3) {
    printf ("Usage: %s <password> <message>\n", argv[0]);
    exit(1);
  }

  	strcpy (msg, argv[2]);

  if (strcmp (argv[1], pwd) == 0) {
    printf ("Correct password has been entered: %s\n", pwd);
  } else {
    printf ("Incorrect password %s\n", argv[1]);
  }
}
