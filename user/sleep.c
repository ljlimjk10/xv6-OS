//
// Created by Jun Kai Lim on 24/02/2025.
//

#include "kernel/types.h"
#include "user.h"

int main(int argc, char *argv[])
{
  if (argc <= 1 || argc > 2)
  {
    fprintf(2, "usage: sleep <number of ticks between 2 interrupts from timer chip>\n");
    exit(1);
  }
  int numOfSeconds = atoi(argv[1]);

  if (numOfSeconds > 0)
  {
    sleep(numOfSeconds);
  }
  else
  {
    fprintf(2, "invalid interval %s. interval should be > 0", numOfSeconds);
    exit(1);
  }

  exit(0);
}