/*
  Usando getchar e puts
*/

#include <stdio.h>

int main() {
  char c; /* variável para manter caractere digitando pelo usuário */
  char sentence[80]; /* cria array de char */
  int i = 0; /* inicializa contador i */

  /* pede ao usuário que digite linha de texto */
  puts("Digite uma linha de texto:");

  /* usa getchar para ler cada caractere */
  while((c = getchar()) != '\n') {
    sentence[i++] = c;
  } /* end while */

  sentence[i] = '\0';
  
  /* usa puts para exibir a sentença */
  puts("\nA linha digitada foi:");
  puts(sentence);

  return 0;
}