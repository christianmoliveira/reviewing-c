#include <stdio.h>
#define SIZE 5

void modifyArray(int b[], int size);
void modifyElement(int e);

int main()
{
  int a[SIZE] = {0, 1, 2, 3, 4};
  int i; // contador

  printf("Efeiutos da passagem do array inteiro por referência:\n\nOs valores "
         "do array original são:\n");

  // imprime na tela array original
  for (i = 0; i < SIZE; i++)
  {
    printf("%3d", a[i]);
  } // fim do for

  printf("\n");

  // passa array a um modifyArray por referência
  modifyArra(a, SIZE);

  printf("Os valores do array modificado são: \n");

  // array modificado na saída
  for (i = 0; i < SIZE; i++)
  {
    printf("%3d", a[i]);
  }

  /* valor de saída de a[ 3 ] */
  printf("\n\n\nEfeitos de passar elemento do array "
         "por valor:\n\nO valor de a[3] é %d\n",
         a[3]);

  modifyElement(a[3]); // passa elemento do arary a[3] por valor

  printf("O valor de a[3] eh %d\n", a[3]);

  return 0;
}

void modifyArray(int b[], int size) {
  int j;

  for (j = 0; j < size; j++) {
    b[j] *= 2;
  }
}

void modifyElement(int e) {
  // multiplica parâmetro por 2
  printf("Valor em modifyElement eh %d\n", e *= 2);
}