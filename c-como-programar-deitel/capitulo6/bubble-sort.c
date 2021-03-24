/**
 * Esse programa ordena os valores de um array em ordem crescente 
 */
#include <stdio.h>
#define SIZE 11

int main() {
  int a[SIZE] = {2, 6, 4, 6, 8, 10, 12, 89, 68, 45, 37};
  int pass;
  int i;
  int hold;

  printf("Itens de dados na ordem original\n");

  // imprime array original
  for (i = 0; i < SIZE; i++) {
    printf("%4d", a[i]);
  } // fim do for 

  /* bubble sort */
  /* loop para controlar número de passadas */
  for (pass = 1; pass < SIZE; pass++) {
    // loop para controlar número de comparações por passada 
    for (i = 0; i < SIZE - 1; i++) {
      /**
       * compara elementos adjacentes e os troca se o primeiro
       * elemento for maior que o segundo elemento
       */
      if (a[i] > a[i + 1]) {
        hold = a[i];
        a[i] = a[i + 1];
        a[i + 1] = hold;
      }
    }
  }

  printf("\nItens de dados em ordem crescente\n");

  for (i = 0; i < SIZE; i++) {
    printf("%4d", a[i]);
  }

  printf("\n");
  return 0;
}