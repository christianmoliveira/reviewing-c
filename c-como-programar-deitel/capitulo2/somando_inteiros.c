#include <stdio.h>

// função main inicia execução do programa
int main(void)
{
  int inteiro1; // primeiro número a ser informado pelo usuário
  int inteiro2; // segundo número a ser informado pelo usuário
  int soma;     // variável em que a soma será mantida

  printf("Digite o primeiro inteiro\n");
  scanf("%d", &inteiro1);

  printf("Digite o segundo inteiro\n");
  scanf("%d", &inteiro2);

  soma = inteiro1 + inteiro2;

  printf("A soma eh %d\n", soma);

  return 0;
} // fim da função main