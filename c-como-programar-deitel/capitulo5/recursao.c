#include <stdio.h>

long factorial(long number); /* protótipo de função */

int main() {
  int i; /* contador */

  /*
    loop 11 vezes; durante cada iteração, calcula
    fatorial(i) e mostra resultado
  */
  for (i = 0; i <= 10; i++) {
    printf("%2d! = %ld\n", i, factorial(i));
  } /* fim do for */

  return 0;
} /* fim da main */

/* definição recursvia da função fatorial */
long factorial(long number) {
  /* caso básico */
  if (number <= 1) {
    return 1;
  }
  else { /* etapa recursiva */
    return (number * factorial(number - 1));
  } /* fim do else */
} /* fim da função fatorial */



