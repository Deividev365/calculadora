#include <stdio.h>



int main() {



  char operador;
  double primeiro, segundo;
  printf("Entre um operador (Soma(+)/Subtracao(-)/Multiplicacao(*)/Divisao(/))");
  scanf("%c", &operador);

  printf("Entre o primeiro operador");
  scanf("%lf", &primeiro);

  printf("Entre o segundo operador");
  scanf("%lf", &segundo);

  switch (operador) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", primeiro, segundo, primeiro + segundo);
      break;
    case '*':
    	printf("%.1lf * %.1lf = %.1lf", primeiro, segundo, primeiro * segundo);
    case'/':
	    printf("%.1lf  / %1lf = %1lf", primeiro, segundo, primeiro / segundo);
    break;
  
  }

  return 0;
}
