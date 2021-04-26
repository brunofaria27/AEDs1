/* Calcule a média e o desvio padrão de uma sequência de números como no exercício anterior, mas agora considere que a quantidade de números n não é fornecida pelo usuário. O programa irá terminar quando o usuário digitar o número 0 (zero). */
#include <stdio.h>
#include <math.h>

int main(void) {
  // armazenar os numeros
  int numero = 0;
  int primeironum = 0;
  // auxiliar da soma e media 
  int auxiliar = 0;
  int soma = 0;
  // variavel para calcular a media 
  double media = 0.0;
  // variavel contadora de quantos numeros foram digitados 
  int contadoranum = 0;
  //variavel para calcular desvio padrao
  double desviopadrao = 0.0;
  double desvio = 0.0; // Usado para dividir a equação
  double desvio2 = 0.0; // Usado para dividir a equação

  // Receber o primeiro número
  printf("\nDigite um número: ");
  scanf("%i", &primeironum); // Scanf utilizado para pegar o primeiro numero
  
  do {
    printf("\nDigite um número: ");
    scanf("%i", &numero); // Scanf utilizado para pegar o número digitado

    auxiliar = auxiliar + numero; // Soma dos números digitados no laço 
    contadoranum++; // Contador de quantos números foram digitados 
  } while (numero != 0);  // End while até que numeor seja = 0

  soma = primeironum + auxiliar; // Calculo da soma 
  printf("\nA soma dos números é: %i\n", soma);

  media = (double)soma/((double)contadoranum); // Cálculo da media aritmetica (não precisa diminuir 1, pois o 0 irá substituir o primeironum)
  printf("A média dos números digitados é igual a: %.2lf\n", media);

  // Cálculo picado do desvio padrão
  desvio = soma + pow(primeironum - media, 2);
  desvio2 = desvio/contadoranum;
  desviopadrao = sqrt(desvio2);
  printf("O desvio padrão dos números digitados é: %.2lf", desviopadrao);

  /*************************************************************************
  ********************** NAO TEM COMO SEM VETOR ****************************
  **************************************************************************/
  
  return 0;
}