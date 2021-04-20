#include <stdio.h>

int cubeByValue(int n); /* protótipo */

int main() {
  int number = 5;

  printf("O valor original do numero eh %d", number);

  /* passa número por valor a cubeByValue */
  number = cubeByValue(number);

  printf("\nO novo valor do numero eh %d\n", number);

  return 0;
}

/* calcula e retorna cubo do argumento inteiro */
int cubeByValue(int n) {
  return n * n * n;
}

