#include <stdio.h>

int main(void) {
  int cod, value;
  double A, B;
    printf("Digite o primeiro número: ");
    scanf("%lf", &A);

    printf("Digite o primeiro número: ");
    scanf("%lf", &B);
    printf("\n\n");

    printf("ESCOLHA A OPERAÇÃO DESEJADA!\n\n");
    printf("ESCOLHA DO USUÁRIO\n\nCOD   OPERAÇÃO\n\n 1    Média aritmética\n\n 2    Diferença do maior pelo menor\n\n 3    Multiplicação\n\n 4    Divisão\n\n");
    printf("Digite o CÓDIGO da operação: ");
    scanf("%d", &cod);

      if (A > B) {
        value = 1;
      }
      else if (B > A) {
        value = 0;
      }

    double media, diferenca, produto, div;
      if (cod == 1) {
        media = (A + B)/2.0;
        printf("O valor da média aritmética é: %.2lf", media);
      }
      else if ((cod == 2) && (A > B) && (value == 1)) {
        diferenca = A - B;
        printf("A diferença do maior número para o menor é: %.2lf", diferenca);
      }
      else if ((cod == 2) && (A < B) && (value == 0)) {
        diferenca = B - A;
        printf("A diferença do maior número para o menor é: %.2lf", diferenca);
      }
      else if (cod == 3) {
        produto = A*B;
        printf("O valor da multiplicação é: %.2lf", produto);
      }
      else if (cod == 4) {
        div = A/B;
        printf("O valor da divisão é: %.2lf", div);
      }
  return 0;
}