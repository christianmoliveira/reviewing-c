#include <stdio.h>

int main() {
  int x;
  int y;

  /* ptr é um ponteiro constante para um inteiro que pode ser modificado por
    meio de ptr, mas ptr sempre aponta para o mesmo local da memória 
  */
  int * const ptr = &x;

  *ptr = 7; /* permitido: *ptr não é const */
  ptr = &y; /* erro: ptr é const; não pode atribuir local da memória */

  return 0;
}