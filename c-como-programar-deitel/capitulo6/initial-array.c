/**
 * Inicializando um array com uma lista de inicializadores
 */

#include <stdio.h>

int main() {
  // usa lista de inicializadores para inicializar array n
  int n[10] = { 32, 27, 64, 18, 95, 14, 90, 70, 60, 37 };
  int i; // contador

  printf("%s%13s\n", "Elemento", "Valor");

  // lista conteúdo do array em formato tabular
  for (i = 0; i < 10; i++) {
    pritnf("%7d%13d\n", i, n[1]);
  } // fim do for 

  return 0;
}