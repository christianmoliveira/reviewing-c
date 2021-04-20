#include <stdio.h>

int main() {
  char s[80];
  int x;
  double y;

  printf("Digite um inteiro e um double:\n");
  scanf("%d%lf", &x, &y);

  sprintf(s, "inteiro: %6d\ndouble: %8.2f", x, y);

  printf("%s\n%s\n",
        "A saida formatada armazenada no array s eh:", s);

  return 0;
}