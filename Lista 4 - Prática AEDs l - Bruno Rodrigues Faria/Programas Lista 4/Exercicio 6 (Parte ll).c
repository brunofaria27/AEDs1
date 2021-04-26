#include <stdio.h>
#include <math.h>

int main(void) {
  // VARIAVEIS VALORES DO X E Y
  int x1;
  int x2;
  int y1;
  int y2;
  // VARIAVEIS PARA O CALCULO DA DISTANCIA ENTRE DOIS PONTOS 
  double valordistancia = 0.0;
  double calc1 = 0.0; // CALCULO DO PRIMEIRO PARENTESES
  double calc2 = 0.0; // CALCULO DO SEGUNDO PARENTESES

  
  // INPUT DE DADOS VALORES DE X E Y
  printf("Digite o valor de X1: ");
  scanf("%i", &x1);
  printf("Digite o valor de Y1: ");
  scanf("%i", &y1);
  printf("Digite o valor de X2: ");
  scanf("%i", &x2); 
  printf("Digite o valor de Y2: ");
  scanf("%i", &y2);
  
  if (x1 != 0 && x2 != 0 && y1 != 0 && y2 != 0) {
    // CALCULOS
    calc1 = pow(x2 - x1, 2);
    calc2 = pow(y2 - y1, 2);
    valordistancia = sqrt(calc1 + calc2);

    printf("O valor da distancia entre os dois pontos é: %.2lf", valordistancia);
  } // END IF CASO OS VALORES DE X E Y FOREM DIFERENTE DE 0
  else {
    printf("Você fechou o programa, os resultados de X e Y foram 0.");
  } // END ELSE CASO O VALOR DE X E Y TENHA 0

  return 0;
}