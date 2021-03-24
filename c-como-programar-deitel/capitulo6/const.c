#include <stdio.h>
#define SIZE 10 // tamanho máximo do array 

int main() {
  int s[SIZE]; //array s tem SIZE elementos
  int j; // contador

  for (j = 0; j < SIZE; j++) {
    s[j] = 2 + 2 * j;
  }

  printf("%s%13s\n", "Elemento", "Valor");

  for (j = 0; j < SIZE; j++) {
    printf("%7d%13d\n", j, s[j]);
  }

  return 0;
}