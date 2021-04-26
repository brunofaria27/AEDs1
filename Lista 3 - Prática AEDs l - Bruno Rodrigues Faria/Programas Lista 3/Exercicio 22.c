#include <stdio.h>

int main(void) {
  
int idades;
float altura = 0.0;
float media = 0.0;
float soma = 0.0;
int contador = 0;


for (int i = 0; idades != 0; i++) { // Start for entrada de dados das idades
  printf("Para fechar o aplicativo lembre-se de digitar a idade do indivíduo = 0\n");
  
  // Entrada de dados da idade
  printf("Digite a idade do indivíduo número %i:  ", i + 1);
  scanf("%i", &idades);
  
  // Entrada de dados da altura se a idade for diferente de 0
  if (idades != 0) { // Start if se a idade for diferente de 0 realiza o input das alturas
    printf("Digite a altura do indivíduo número %i: ", i + 1);
    scanf("%f", &altura);
  } // End if se a idade for diferente de 0 realiza o input das alturas
  
  if (idades > 50) { // Start soma das alturas se a idade for maior que 50 anos 
    contador++; // Contador para saber quantos indivíduos tem mais de 50 anos
    soma += altura;
    media = soma/contador;
  } // End soma das alturas se a idade for maior que 50 anos 
} // End for entrada de dados das idades

    printf ("A média de altura das pessoas com mais de 50 anos é: %.2f\n\n", media);

  return 0;
} // End int main