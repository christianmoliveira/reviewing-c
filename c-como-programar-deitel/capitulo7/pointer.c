#include <stdio.h>

int main() {
  int y = 5;
  int *yPtr;

  yPtr = &y;

  ++(*yPtr);

  printf("%d\n", *yPtr);

  printf("\n");

  return 0;
}