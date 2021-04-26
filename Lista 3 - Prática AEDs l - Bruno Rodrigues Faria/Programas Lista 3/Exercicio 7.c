/* Faça um programa que receba a idade, a altura e o peso de cinco pessoas, calcule e mostre: 
■ a quantidade de pessoas com idade superior a 50 anos; 
■ a média das alturas das pessoas com idade entre 10 e 20 anos; 
■ a porcentagem de pessoas com peso inferior a 40 kg entre todas as pessoas analisadas. */
#include <stdio.h>

int main(void) {
  int idade = 0; 
  float altura = 0.0;
  float peso = 0.0;
 
  int idadesuperior = 0;
  int numpessoas10e20 = 0;
  int contadordepessoas = 0;
  float pesomenor40 = 0.0;
  float somaaltura10e20 = 0.0;

  for (int i = 0; i < 5; i++) {
    printf("Digite a idade da pessoa número %d: ", i + 1);
    scanf("%d", &idade);
    printf("Digite a altura da pessoa número %d: ", i + 1);
    scanf("%f", &altura);
    printf("Digite o peso da pessoa número %d: ", i + 1);
    scanf("%f", &peso);

    printf("--------------------------------\n");

    if( idade > 50 ) {
            idadesuperior++;
        if( idade >= 10 && idade <= 20 ) {
            somaaltura10e20 += altura;
            numpessoas10e20++;
        }
        if( peso < 40 )
            pesomenor40++;

        contadordepessoas++;
        i++;
        }
  } // End for 
  
  printf("\n\t\tRESULTADO:\n\nQtd. de pessoa com idade superior a 50: %d", idadesuperior);

    if( numpessoas10e20 == 0 ) {
        
        numpessoas10e20 = 1;
    
    printf("\nMedia das alturas de pessoas entre 10 e 20 anos: %.2f", somaaltura10e20 / numpessoas10e20);
    printf("\nPorcentagem de pessoas com peso inferior a 40 kg: %.2f%%\n\n", pesomenor40 * 100 / contadordepessoas);
    }
  return 0;
} // End for 