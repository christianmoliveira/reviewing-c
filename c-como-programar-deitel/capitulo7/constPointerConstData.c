#include <stdio.h>

int main() {
  int x = 5;
  int y;

  /* ptr é um ponteiro constante para um inteiro constante. ptr sempre
    aponta o mesmo local; o inteiro nesse local
    não pode ser modificado 
  */
  const int *const ptr = &x;

  prtinf("%d\n", *ptr);
  *ptr = 7; /* erro: *ptr é const; não pode atribuir novo valor */
  ptr = &y; /* erro: ptr é const; não pode atribuir novo endereço */

  return 0;
}