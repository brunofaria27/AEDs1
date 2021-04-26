#include <stdio.h>

int main(void) {
    printf("Programa para calcular o salário de um(a) trabalhador(a), sabendo-se que ele(a)ganha (5 por cento) de gratificação sobre o salário base e tem que pagar (7 por cento) de imposto, também sobre o salário base \n");

// Entrada de dados.
double salario_base;
    printf("O salário base do(a) trabalhador(a) é: ");
    scanf("%lf", &salario_base);

// Saída de dados.
double salario_final;
  salario_final = salario_base + (salario_base*0.05)-(salario_base*0.07);
    printf("O valor do salário que o(a) trabalhador(a) vai receber é de: %.2f", salario_final); 
  return 0;
}