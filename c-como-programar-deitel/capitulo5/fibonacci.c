#include <stdio.h>

long fibonacci(long n);

int main() {
  long result; /* valor de fibonacci */
  long number; /* número fornecido pelo usuário */

  printf("Digite um inteiro: ");
  scanf("%ld", &number);

  /* calcula valor de fibonacci para número informado pelo usuário */
  result = fibonacci(number);
  
  /* mostra resultado */
  printf("Fibonacci(%ld) = %ld\n", number, result);

  return 0;  
}

/* Definição recursiva de fibonacci */
long fibonacci(long n) {
  /* caso básico */
  if (n == 0 || n == 1) {
    return n;
  } /* fim do if */
  else { /* etapa recursiva */
    return fibonacci(n - 1) + fibonacci(n - 2);
  } /* fim do else */
} /* fim da função fibonacci */