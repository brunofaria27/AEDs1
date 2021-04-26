#include <stdio.h>

int main(void) {
    printf("Programa utilizado para calcular a média ponderada de três notas e seus respectivos pesos. \n");

// Entrada de dados.
double nota_1, nota_2, nota_3;
int peso_1, peso_2, peso_3;
    printf("Coloque as três notas: ");
    scanf("%lf %lf %lf", &nota_1, &nota_2, &nota_3);

    printf("Digite os pesos das notas respectivamente à %.2lf, %.2lf e %.2lf: ", nota_1, nota_2, nota_3);
    scanf("%d %d %d", &peso_1, &peso_2, &peso_3);

// Saída de dados.
double media_ponderada;
  media_ponderada = ((nota_1*peso_1) + (nota_2*peso_2) + (nota_3*peso_3))/(peso_1 + peso_2 + peso_3);
    printf("O valor da média ponderada das notas é: %.2f", media_ponderada);
  return 0;
}