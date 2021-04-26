#include <stdio.h>

int main(void) {
    printf("Reajuste salarial, para começar digite o salário abaixo! Use . para separar os centavos! \n");
  
  // Entrada de dados (salário).
  double salario_atual;
    printf("Digite o salário do trabalhador(a): ");
    scanf("%lf", &salario_atual);
  
  // Saída de dados (salário reajustado).
  float salario_reajustado;
    salario_reajustado = salario_atual * 1.10;
    printf("O novo salário do(a) trabalhador(a) é: %.2f", salario_reajustado);  
  
  return 0;
}