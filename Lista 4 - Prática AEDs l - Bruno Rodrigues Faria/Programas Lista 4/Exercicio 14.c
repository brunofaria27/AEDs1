#include <stdio.h>

int main(void) {
  int numalunos = 0;
  float notas = 0.0;
  float somanotas = 0.0;
  float media = 0.0;
  
  // Receber a quantidade de alunos na sala
  printf("Digite o números de alunos da sala: ");
  scanf("%i", &numalunos);

  // Receber as notas dessses alunos 
  for (int i = 0; i < numalunos; i++) {
    printf("Digite a nota do aluno %i: ", i + 1);
    scanf("%f", &notas);

    somanotas = somanotas + notas;
  }
  // Output da média das notas
  printf("\n");

  media = somanotas/numalunos;
  printf("A média aritmética destas notas é: %.2f", media);

  return 0;
}