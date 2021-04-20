/*
  Usando um tipo de enumeração
*/

/* constantes de enumeração representam meses do ano */
enum months {
  JAN = 1, FEV, MAR, ABR, MAI, JUN, JUL, AGO, SET, OUT, NOV, DEZ
};

int main() {
  enum months month; /* pode conter qualquer um dos 12 meses */

  /* inicializa array de ponteiros */
  const char *monthName[] = {"", "Janeiro", "Fevereiro", "Março",
    "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", 
    "Novembro", "Dezembro"};

  /* loop pelo meses */
  for (month = JAN; month <= DEZ; month++) {
    printf("%2d%11s\n", month, monthName[month]);
  } /* fim do for */

  return 0;
}
