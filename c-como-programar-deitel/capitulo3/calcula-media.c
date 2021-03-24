#include <stdio.h>

int main()
{
  int contador, nota, total;
  float media;

  total = 0;
  contador = 0;

  printf("Digite a nota, -1 no fim: ");
  scanf("%d", &nota);

  while (nota != -1)
  {
    total += nota;
    contador += 1;

    printf("Digite a nota, -1 para finalizar: ");
    scanf("%d", &nota);
  }

  if (contador != 0)
  {
    media = (float)total / contador;

    printf("Media da turma eh %.2f\n");
  }
  else
  {
    printf("Nenhuma nota foi informada\n");
  }

  return 0;
}