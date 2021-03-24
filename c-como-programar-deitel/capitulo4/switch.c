#include <stdio.h>

int main()
{
  int nota;
  int aCount = 0; /* número de As */
  int bCount = 0; /* número de Bs */
  int cCount = 0; /* número de Cs */
  int dCount = 0; /* número de Ds */
  int eCount = 0; /* número de Es */
  int fCount = 0; /* número de Fs */

  printf("Digite as notas em letra.\n");
  printf("Digite o caractere EOF para encerrar a entrada.\n");

  /* loop até que o usuário digite a sequência de fim de arquivo */
  while ((nota = getchar()) != EOF) 
  {
    /* determina qual nota foi digitada */
    switch(nota) 
    {
      case 'A':
      case 'a':
        ++aCount;
        break;
      
      case 'B':
      case 'b':
        ++bCount;
        break;

      case 'C':
      case 'c':
        ++cCount;
        break;

      case 'D':
      case 'd':
        ++dCount;
        break;

      case 'E':
      case 'e':
        ++eCount;
        break;

      case 'F':
      case 'f':
        ++fCount;
        break;

      default: /* apanha todos os outros caracteres */
        printf("Letra de nota incorreta.");
        printf(" Digite nova nota.\n");
        break;
    } /* fim do switch */
  } /* fim do while */

  return 0;
}