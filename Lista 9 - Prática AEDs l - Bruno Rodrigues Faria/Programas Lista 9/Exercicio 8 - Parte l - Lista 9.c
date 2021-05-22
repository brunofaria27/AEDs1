#include <stdio.h>
#include <string.h>

int main(void) {
  int contador = 0;
  char frase[50];
  char caractere = 0;

  printf("Digite uma frase: ");
  fgets(frase, 50, stdin); // Pegar a frase da string 
  int tamanho = strlen(frase) - 1; // Contar o numero de caracteres da string

  printf("Digite um caractere: ");
  scanf("%c", &caractere);

  for( int i =0; frase[i] != '\0'; i++) {
    if(frase[i] == caractere)
      contador++;
  }              
  
  printf ("%d caracteres na frase.", contador);
  
  return 0;
}