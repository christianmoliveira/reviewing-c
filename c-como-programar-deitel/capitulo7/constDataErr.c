/*
  Tentando modificar dados por meio de um
  ponteiro não constante para dados constantes.
*/

#include <stdio.h>

void f( const int *xPtr );

int main() {
  int y; /* define y */

  f( &y ); /* f tenta modificação ilegal */
  
  return 0;
}

/*
  xPtr não pode ser usado para modificar o valor
  da variável à qual ele aponta
*/
void f( const int *xPtr ) {
  *xPtr = 100; /* erro: não pode modificar um objeto const  */
}
