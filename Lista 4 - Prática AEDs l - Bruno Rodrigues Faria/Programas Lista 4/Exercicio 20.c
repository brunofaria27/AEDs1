/* Faça um algoritmo para ler dois valores inteiros e imprimir o resultado da divisão do primeiro pelo segundo. Se o segundo valor informado for ZERO, deve ser impressa uma mensagem de VALOR INVÂLIDO e deverá ser lido um novo valor. Ao final do programa deve ser impressa a seguinte mensagem: VOCE DESEJA OUTRO CÁLCULO (S/N)?. Se a resposta for S o programa deverá retornar ao começo, caso contrário deverá encerrar a sua execução imprimindo quantos cálculos foram feitos. */
#include <stdio.h>

int main(void) {
  double valor1 = 0.0;
  double valor2 = 0.0;
  double resposta = 0.0;
  char desejo = '\n';

  do {

    printf("Digite o primeiro valor: ");
    scanf("%lf", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%lf", &valor2);

    if (valor2 == 0)
    {
      printf("O valor digitado para o segundo valor foi inválido.\n");
    }
    else {

      resposta = valor1/valor2;
      printf("O resultado da divisão de %.0lf/%.0lf é: %.0lf\n", valor1, valor2, resposta);
    }

      printf("Você deseja efetuar outra divisão (N ou S)? ");
      scanf("%s",&desejo);


  } while (desejo != 'N');

  return 0;
}