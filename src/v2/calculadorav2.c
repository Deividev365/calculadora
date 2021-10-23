#include <stdio.h>


int main() {

  char operador;
  double primeiro, segundo;
  int decisaoUsuario;

  menu:
  
  fflush(stdin);

  printf("Entre um operador (Soma(+)/Multiplicacao(*)/Divisao(/)/Subtracao(-))....:");
  scanf("%c", &operador);


  fflush(stdin);

  printf("Entre o primeiro número...: ");
  scanf("%lf", &primeiro);

  fflush(stdin);

  printf("Entre o segundo operador...: ");
  scanf("%lf", &segundo);

  switch (operador) {
    case '+':


     

      break;
    case '*':
    	printf("%.1lf * %.1lf = %.1lf", primeiro, segundo, primeiro * segundo);

       printf("\n\nRealizar outro cálculo? digite (1) Para finalizar?(0): ");
       scanf("%d", &decisaoUsuario);
        if(decisaoUsuario == 1) {
            goto menu;
        } else if(decisaoUsuario == 0) {
          printf("Saindo...");
          return(0);
        }
            break;

    case'/':
	  //...

   case'-':
	  //...

    break;

    default:
    printf("Erro! ");
  
  }

  return 0;
}
