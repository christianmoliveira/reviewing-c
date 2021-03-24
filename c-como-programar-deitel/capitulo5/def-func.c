#include <stdio.h>

int square(int y); /* protótipo de função */

int main() {
  int x;

  for (x = 1; x <= 10; x++) {
    printf("%d", square(x));
  }

  printf("\n");
  return 0;
}

// definição de função square retorna quadrado do parâmetro
int square(int y) {
  return y * y;
}


