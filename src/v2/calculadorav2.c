#include <stdio.h>


int main() {

  char operador;
  double primeiro, segundo;
  int decisaoUsuario;

  menu:
  
  fflush(stdin);

  printf("Escolha uma operacao:\n\t|Soma(+)\n\t|Multiplicacao(*)\n\t|Divisao(/)\n\t|Subtracao(-)\n:");
  scanf("%c", &operador);


  fflush(stdin);

  printf("Entre o primeiro número: ");
  scanf("%lf", &primeiro);

  fflush(stdin);

  printf("Entre o segundo operador: ");
  scanf("%lf", &segundo);

  fflush(stdin);


  switch (operador) {
    case '+':
       printf("%.1lf * %.1lf = %.1lf", primeiro, segundo, primeiro + segundo);
        printf("\n\nRealizar outro calculo? \n\t\tDigite (1)\nFinalizar? \n\t\tDigite (0) ");
       scanf("%d", &decisaoUsuario);
        if(decisaoUsuario == 1) {
            goto menu;
        } else if(decisaoUsuario == 0) {
          printf("Saindo...");
          return(0);
        }
      break;
    case '*':
    	printf("%.1lf * %.1lf = %.1lf", primeiro, segundo, primeiro * segundo);

       printf("\n\nRealizar outro calculo? \n\t\tDigite (1)\nFinalizar? \n\t\tDigite (0) ");
       scanf("%d", &decisaoUsuario);
        if(decisaoUsuario == 1) {
            goto menu;
        } else if(decisaoUsuario == 0) {
          printf("Saindo...");
          return(0);
        }
            break;

    case'/':
	 printf("%.1lf / %.1lf = %.1lf", primeiro, segundo, primeiro / segundo);

        printf("\n\nRealizar outro calculo? \n\t\tDigite (1)\nFinalizar? \n\t\tDigite (0) ");
       scanf("%d", &decisaoUsuario);
        if(decisaoUsuario == 1) {
            goto menu;
        } else if(decisaoUsuario == 0) {
          printf("Saindo...");
          return(0);

   case'-':
	  printf("%.1lf - %.1lf = %.1lf", primeiro, segundo, primeiro - segundo);

        printf("\n\nRealizar outro calculo? \n\t\tDigite (1)\nFinalizar? \n\t\tDigite (0) ");
       scanf("%d", &decisaoUsuario);
        if(decisaoUsuario == 1) {
            goto menu;
        } else if(decisaoUsuario == 0) {
          printf("Saindo...");
          return(0);
        }

    break;

    default:
    printf("Erro! ");
  
  }
  }

  return 0;
}
