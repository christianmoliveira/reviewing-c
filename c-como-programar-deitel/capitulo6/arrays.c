#include <stdio.h>

int main() {
  int n[10]; // n é um arry de 10 inteiros
  int i; // contador

  // inicializa elementos do array n como 0 
  for (i = 0; i < 10; i++) {
    n[i] = 0; // define elemento no local i como 0
  } // fim do for

  printf("%s%13s\n", "Elemento", "Valor");

  // saída na tela de conteúdo do array n em formato tabular 
  for (i = 0; i < 10; i++) {
    printf("%7d%13d\n", i, n[i]);
  }

  return 0;
}