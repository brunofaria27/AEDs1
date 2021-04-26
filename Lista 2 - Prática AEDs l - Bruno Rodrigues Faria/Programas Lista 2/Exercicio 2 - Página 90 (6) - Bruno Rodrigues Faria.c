#include <stdio.h>
#include <math.h>

int main(void) {
  int cod, value;
  double A, B;
    printf("Digite o primeiro número: ");
    scanf("%lf", &A);

    printf("Digite o primeiro número: ");
    scanf("%lf", &B);
    printf("\n\n");

    printf("ESCOLHA A OPERAÇÃO DESEJADA!\n\n");
    printf("ESCOLHA DO USUÁRIO\n\nCOD   OPERAÇÃO\n\n 1    Primeiro número elevado pelo segundo\n\n 2    Raiz quadrada de cada um dos números\n\n 3    Raiz cúbica de cada um dos números\n\n");
    printf("Digite o CÓDIGO da operação: ");
    scanf("%d", &cod);

    double elevado, raizquadrada1, raizquadrada2, raizcubica1, raizcubica2;
      if (cod == 1) {
        elevado = pow(A,B);
        printf("O valor do primeiro número elevado ao segundo é: %.2lf", elevado);
      }
      else if (cod == 2) {
        raizquadrada1 = sqrt(A);
        raizquadrada2 = sqrt(B);
        printf("A raiz quadrada do primeiro número e segundo respectivamente é: %.2lf e %.2lf", raizquadrada1, raizquadrada2);
      }
      else if (cod == 3) {
        raizcubica1 = cbrt(A);
        raizcubica2 = cbrt(B);
        printf("A raiz cúbica do primeiro número e segundo respectivamente é: %.2lf e %.2lf", raizcubica1, raizcubica2);
      }
      else {
        printf("O código apresentado não está no sistema!"); 
      }

  return 0;
}