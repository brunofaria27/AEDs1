#include <stdio.h>

void alturaIdeal (int alt, int sexo) {
  double ideal = 0;
  if (sexo == 1) {
    ideal = 72.7 * alt - 58;
    printf("A altura ideal para o sexo masculino na altura digitada é: %.2lf", ideal);
  }
  else if (sexo == 2) {
    ideal = 72.7 * alt - 57;
    printf("A altura ideal para o sexo feminino na altura digitada é: %.2lf", ideal);
  }
  else {
    printf("O código do sexo digitado está inválido.");
  }
}

int main(void) {
  double alt = 0;
  double sexo = 0;
 
  printf("Digite a altura do indivíduo: ");
  scanf("%lf", &alt);
  /* Imprimir menu sexo start */
  printf("\n");       // Pular linha no console
  printf("CÓDIGO  -  SEXO\n");
  printf("  1     -  Masculino\n");
  printf("  2     -  Feminino\n");
  printf("\n");       // Pular linha no console
  /* Imprimir menu sexo end */
  printf("Digite o sexo do indivíduo: ");
  scanf("%lf", &sexo);

  alturaIdeal (alt, sexo);

  return 0;
}