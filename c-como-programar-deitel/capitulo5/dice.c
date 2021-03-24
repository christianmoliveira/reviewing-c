#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  int i; 

  for (i = 1; i <= 20; i++) {
    // Escolhe um número aleatório de 1 a 6
    printf("%10d", 1 + (rand() % 6));

    // Se contador é divisível por 5, inicia nova linha de impressão
    if (i % 5 == 0) 
      printf("\n");
  }

  return 0;
}