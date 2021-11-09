
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*
raiz quadrada de um numero
*/

int main(){
float num, raiz;
printf("Digite um numero: \t");
scanf("%f",&num);
raiz = sqrt(num);
printf("A raiz quadrada de %f é: %f.\n", num, raiz);
system("pause");
return 0;    
}