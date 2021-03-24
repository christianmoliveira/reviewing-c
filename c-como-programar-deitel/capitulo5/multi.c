#include <stdio.h>

int multi(int, int);

int main()
{
  int result;     /* valor de fibonacci */
  int number = 6; /* número fornecido pelo usuário */
  int multip = 3;

  result = multi(number, multip);

  /* mostra resultado */
  printf("Multi(%ld) = %ld\n", number, result);

  return 0;
}

/* Definição recursiva da multiplicação */
int multi(int n, int m)
{
  /* caso básico */
  if (m == 1)
  {
    return n;
  } /* fim do if */
  else if (m == 0)
  {
    return 0;
  }
  else
  { /* etapa recursiva */
    return n + multi(n, m - 1);
  } /* fim do else */
} /* fim da função fibonacci */