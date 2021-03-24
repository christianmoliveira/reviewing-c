#include <stdio.h>

int main()
{
  int contador; /*  */
  int nota;     /*  */
  int total;    /*  */
  int media;    /*  */

  /* fase de inicialização */
  total = 0;    /* inicializa total */
  contador = 1; /* inicializa contador do loop */

  /* fase de processamento */
  while (contador <= 10) /* loop 10 vezes */
  {
    printf("Digite a nota: "); /* prompt para inserção */
    scanf("%d", &nota);        /* lê a nota do usuário */
    total += nota;             /* soma nota ao total */
    contador += 1;             /* incrementa contador */
  }

  /* fase de término */
  media = total / 10;

  printf("Media da turma eh %d\n", media);

  return 0;
}