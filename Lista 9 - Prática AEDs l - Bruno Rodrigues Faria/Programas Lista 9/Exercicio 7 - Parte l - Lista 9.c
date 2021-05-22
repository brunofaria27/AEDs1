#include <stdio.h>
#include <string.h>

int letras_diferentes(char palavra[] , int tam){
  char aux[50] = {0}, a;
  int i = 0, t = 0;
    
  for(t = 0; t < tam; t++){
    a = palavra[t];
    if(a >= 65 && a <= 90) 
    a -= 65;
    else a -= 97;
      aux[a]++;
    if(aux[a] == 1) 
    i++;
    }

  return i;
}

int main(void) {
  char frase[50];
  int function;

  printf("Digite uma frase: ");
  fgets(frase, 50, stdin); // Pegar a frase da string 
  int tamanho = strlen(frase) - 1; // Contar o numero de caracteres da string

  function = letras_diferentes(frase, tamanho);
  printf("%i", function);

  return 0;
}