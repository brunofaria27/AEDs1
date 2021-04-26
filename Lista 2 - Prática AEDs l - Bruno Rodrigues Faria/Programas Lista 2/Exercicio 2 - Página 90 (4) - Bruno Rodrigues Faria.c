#include <stdio.h>

int main(void) {
  double A, B, C;
    printf("Digite o valor do primeiro número: ");
    scanf("%lf", &A);

    printf("Digite o valor do segundo número: ");
    scanf("%lf", &B);

    printf("Digite o valor do terceiro número: ");
    scanf("%lf", &C);

  double maior;
    if ((A > B) && (A > C)) {
      printf("O maior número é %lf", A);
    }
    else if ((B > A) && (B > C)) {
      printf("O maior número é %.2lf", B);
    }
    else if ((C > B) && (C > A)) {
      printf("O maior número é %.2lf", C);
    }
  return 0;
}