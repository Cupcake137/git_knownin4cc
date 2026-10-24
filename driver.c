#include <stdio.h>

void driver_init(void) {
  // Hardware peripheral initialization
  printf("GPIO Driver Initialized\n");

  // Faking in4 for situation while coding...
  int a = 13;
  int b = 7;
  int c = a + b;

  printf("Result a + b = %d\n", c);

  // TODO: now...
}
