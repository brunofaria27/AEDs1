#include <stdio.h>

float mediaSalario (float salario, float filhos, float contadordepessoas, float somasalario) {
  float resposta = 0;
  
  resposta = somasalario / (contadordepessoas - 1);

  return resposta;
}

float mediaFilhos (float salario, float filhos, float contadordepessoas, float somafilhos) {
  float resposta = 0;

  resposta = somafilhos / (contadordepessoas - 1);

  return resposta;
}

float salarioInferior (int contadorsalariobaixo) {
  int resposta = 0;

  resposta = contadorsalariobaixo - 1;

  return resposta;
}

float maiorSalario (maior) {
  int resposta = 0;

  resposta = maior;

  return resposta;
}


int main(void) {
  float salario;
  float filhos;
  float contadordepessoas = 0;
  float somasalario = 0;
  float somafilhos = 0;
  float mediasalario = 0;
  float mediafilhos = 0;
  int salarioinferior = 0;
  int contadorsalariobaixo = 0;
  float maior = 0;
  float maiorsalario = 0;

  printf("PARA FECHAR O PROGRAMA E RECEBER OS DADOS DIGITE 0 EM FILHOS E 0 EM SALÁRIO.\n");

  do {

    printf("Digite o salário: ");
    scanf("%f", &salario);

    printf("Digite a quantidade de filhos: ");
    scanf("%f", &filhos);

    contadordepessoas++;

    somasalario = somasalario + salario; // Somar salário
    somafilhos = somafilhos + filhos;    // Soma número de filhos

    if (salario < 380) {
      contadorsalariobaixo++;
    }

    if (salario > maior) {
      maior = salario;
    }
    
  } while (filhos != 0 && salario != 0);


  mediasalario = mediaSalario (salario, filhos, contadordepessoas, somasalario);
  printf("\nA média salarial é de: %.2f\n", mediasalario);

  mediafilhos = mediaFilhos (salario, filhos, contadordepessoas, somafilhos);
  printf("A média de filhos é: %.2f\n", mediafilhos);

  salarioinferior = salarioInferior (contadorsalariobaixo);
  printf("A quantidade de pessoas que tem salário inferior a R$380 é: %i\n", salarioinferior);

  maiorsalario = maiorSalario (maior);
  printf("O maior salário é: %.2f\n", maiorsalario);

  return 0;
}