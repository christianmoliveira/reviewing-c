/*
  Convertendo ums string em maiúsculas usando um 
  ponteiro não constante para dados não constantes
*/

#include <stdio.h>
#include <ctype.h>

void convertToUppercase(char *sPtr); /* protótipo */

int main() {
  char string[] = "caracteres e R$32,98"; /* incializa array de char */

  printf("A string antes da conversao eh: %s", string);
  convertToUppercase(string);
  printf("\nA string após a conversão eh: %s\n", string);

  return 0;
}

/* converte string em letras maiúsculas */
void convertToUppercase(char *sPtr) {
  while(*sPtr != '\0') { /* caractere atual não é '\0' */
    if (islower(*sPtr)) { /* se o caractere é minúsculo */
      *sPtr = toupper(*sPtr); /* converte em maiúsculas */
    } /* fim do if */

    ++sPtr;
  } /* fim do while */
} /* fim da função convertToUppercase */
