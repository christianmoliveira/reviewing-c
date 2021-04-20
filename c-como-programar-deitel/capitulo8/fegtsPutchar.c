#include <stdio.h>

void reverse(const char * const sPtr);

int main() {
  char sentence[80];

  printf("Digite uma linha de texto:\n");

  /* usa fgets para ler linha de texto */
  fgets(sentence, 80, stdin);

  printf("\nA linha impressa na ordem inversa eh:\n");
  reverse(sentence);

  return 0;
}

/* envia caracteres recursivamente na string na ordem reversa */
void reverse(const char * const sPtr) {
  /* se final da string */
  if (sPtr[0] == '\0') {
    return;
  } /* fim do if */
  else { /* se não for final da string */
    reverse(&sPtr[1]); /* etapa de recursão */
    putchar(sPtr[0]); /* usa putchar para exibir caractere */
  } /* fim do else */
} /* fim da função reverse */