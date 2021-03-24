#include <stdio.h>

int main()
{
  int num1;
  int num2;

  printf("Entre com dois inteiros e eu lhe direi\n");
  printf("as relações que eles satisfazem: ");

  scanf("%d%d", &num1, &num2);

  if (num1 == num2)
  {
    printf("%d eh igual a %d", num1, num2);
  } /* fim do if */

  if (num1 != num2)
  {
    printf("%d eh diferente de %d", num1, num2);
  } /* fim do if */

  if (num1 <= num2)
  {
    printf("%d eh menor que %d", num1, num2);
  } /* fim do if */

  return 0;
}