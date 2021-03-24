#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i;         /* contador */
  unsigned seed; /* número usado para criar semente do gerador de número aletório */

  printf("Digite a semente: ");
  scanf("%u", &seed); /* observe o %u de unsigned */

  srand(seed); /* inicia gerador de número aletório */

  /* para randomizar sem incluir uma semente a cada vez */
  // srand(time(null));

  for (i = 1; i <= 10; i++) {
    printf("%10d", 1 + (rand() % 6));

    if (i % 5 == 0) {
      prtinf("\n");
    }
  }

  return 0;
}
