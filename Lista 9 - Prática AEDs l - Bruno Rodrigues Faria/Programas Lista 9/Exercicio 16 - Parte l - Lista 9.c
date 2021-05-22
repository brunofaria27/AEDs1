#include <stdio.h>
#include <string.h>

int main(void) {
  char frase[101]; // Um espaço está reservado para o fechamento da string
  int i = 0;
  int letras = 0, numeros = 0, espacos = 0;

  printf("Digite uma frase: ");
  fgets(frase, 101, stdin); // Pegar a frase da string 
  int tamanho = strlen(frase) - 1; // Contar o numero de caracteres da string (-1 eliminar o caractere finalizador)

  for(i = 0; i < tamanho; i++) {
    if(frase[i] >= 65 && frase[i] <= 122) { // Utilização da tabela ASCII
      letras++;
    }
    if(frase[i] >= 48 && frase[i] <= 57) { // Utilização da tabela ASCII
      numeros++;
    }
    if(frase[i] == ' ') {
      espacos++;
    }
  }

  printf("\nA quantidade de letras na frase é: %i\n", letras);
  printf("A quantidade de números na frase é: %i\n", numeros);
  printf("A quantidade de espaços na frase é: %i\n", espacos);

  return 0;
}