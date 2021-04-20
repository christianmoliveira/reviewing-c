#include <stdio.h>

void cubeByReference(int *nPtr); /* protótipo */

int main() {
  int number = 5;

  printf("O valor original do numero eh %d", number);

  /* passa número por valor a cubeByValue */
  cubeByReference(&number);

  printf("\nO novo valor do numero eh %d\n", number);

  return 0;
}

/* calcula e retorna cubo do argumento inteiro */
void cubeByReference(int *nPtr) {
  *nPtr = *nPtr * *nPtr * *nPtr;
}

