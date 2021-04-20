/**
 * Usando operadores & e *
 */

#include <stdio.h>

int main() {
  int a; 
  int *aPtr;

  a = 7;
  aPtr = &a;

  printf("O endereco de a eh %p\nO valor de aPtr eh %d", &a, *aPtr);
  printf("O valor de a eh %d\nO valor de aPtr eh %d", &a, *aPtr);
  printf("Mostrando que * e & são complementos um do outro\n&*aPtr = %p",
          "\n*&aPtr = %p", &*aPtr, *&aPtr);

  return 0;
}