#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

void sighandler(int dummy) {
  printf("\nHello, Nagasaki!\n");
  exit(1);
}

int main(void) {
  signal(SIGINT, sighandler);
  while (1) {
    /* do nothing */
  }
  return 0;
}

