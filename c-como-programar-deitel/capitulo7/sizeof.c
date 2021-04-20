 /* 
  A aplicação de sizeof a um nome de array retorna
  o número de bytes no array. */
#include <stdio.h>

size_t getSize( float *ptr );

int main() {
  float array[20]; /* cria array */

  printf("O numero de bytes no array eh %d"
          "\nO numero de bytes retornados por getSize eh %d\n",
          sizeof(array), getSize(array));

  return 0;
}

/* retorna tamanho de ptr */
size_t getSize( float *ptr ) {
  return sizeof(ptr);
}