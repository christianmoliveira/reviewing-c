#include <stdio.h>
#define RESPONSE_SIZE 40 // define tamanhos de array
#define FREQUENCY_SIZE 11

int main()
{
  int answer; /* contador para percorrer 40 respostas */
  int rating; /* contador para percorrer frequências 1-10 */

  int frequency[FREQUENCY_SIZE] = {0};

  int responses[RESPONSE_SIZE] = {1, 2, 6, 4, 8, 5, 9, 7, 8, 10,
                                 1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 
                                 6, 7, 5, 6, 6, 5, 6, 7, 5, 6, 4, 8, 6, 8, 10};

  /* para cada resposta, seleciona valor de um elemento do array responses
    e usa esse valor como subscrito na frequência do array para
    determinar elemento a ser incrementado
   */
  for (answer = 0; answer < RESPONSE_SIZE; answer++) {
    ++frequency[responses[answer]];
  } // fim do for

  // mostra resultados
  printf("%s%17s\n", "Avaliacao", "Frequencia");

  // listas de impressão das frequências em um formato tabular 
  for (rating = 0; rating < FREQUENCY_SIZE; rating++) {
    printf("%6d%17d\n", rating, frequency[rating]);
  } // fim do for

  return 0;
}