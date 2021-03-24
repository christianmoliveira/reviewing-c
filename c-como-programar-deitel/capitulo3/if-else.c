#include <stdio.h>

int main()
{
  int nota;

  printf("Digite a nota do aluno: ");
  scanf("%d", &nota);

  // if (nota >= 60)
  // {
  //   printf("Aprovado\n");
  // } /* fim do if */
  // else
  // {
  //   printf("Reprovado\n");
  // } /* fim do else */

  printf("%s\n", nota >= 60 ? "Aprovado" : "Reprovado");

  return 0;
}