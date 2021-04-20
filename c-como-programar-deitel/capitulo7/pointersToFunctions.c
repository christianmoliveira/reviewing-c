#include <stdio.h>
#define SIZE 10

/* protótipos */
void bubble(int work[], const int size, int (*compare)(int a, int b));
int ascending(int a, int b);
int descending(int a, int b);

int main() {
  int order; // 1 para ordem crescente ou 2 para ordem decrescente
  int counter; 

  // inicializa array 
  int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};

  printf("Digite 1 para classificar em ordem crescente, \n"
        "Digite 2 para classificar em ordem decrescente: ");
  scanf("%d", &order);

  printf("\nItens de dados na ordem original\n");

  /* mostra array original */
  for (counter = 0; counter < SIZE; counter++) {
    printf("%5d", a[counter]);
  } /* fim do for */

  /*
    classifica array em ordem crescente; passa função crescente como
    um argumento para especficar classificação crescente.
  */
  if (order == 1) {
    bubble(a, SIZE, ascending);
    printf("\nItens de dados em ordem crescente\n");
  } /* fim do if */
  else { /* passa a função decrescente */
    bubble(a, SIZE, descending);
    printf("\nItens de dados em ordem decrescente\n");
  } /* fim do else */

  /* mostra array ordenado */
  for (counter = 0; counter < SIZE; counter++) {
    printf("%5d", a[counter]);
  } /* fim do for */

  printf("\n");

  return 0;
} /* fim do main */

/*
  bubble sort de múltipla finalidade; parâmetro compare é um ponteiro
  para a função de comparação que determina classificação
*/
void bubble(int work[], const int size, int (*compare)(int a, int b)) {
  
}