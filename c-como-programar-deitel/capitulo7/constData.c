/*
  Imprimindo uma string um caractere por vez usando
  um ponteiro não constante para dados constantes
*/

#include <stdio.h>

void printCharacters(const char *sPtr);

int main() {
  /* inicializa array de char */
  char string[] = "imprime caracteres de uma string";

  printf("A string eh:\n");
  printCharacters(string);
  printf("\n");

  return 0;
} /* fim da main */

/*
  sPtr não pode modificar o caractere ao qual aponta,
  ou seja, sPtr é um ponteiro “somente de leitura”
*/

void printCharacters(const char *sPtr) {
  /* loop pela string inteira */
  for (; *sPtr != '\0'; sPtr++) { /* sem inicialização */
    printf("%c", *sPtr);
  } /* fim do for */
} /* fim da função convertToUppercase */