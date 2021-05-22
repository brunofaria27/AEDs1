#include <stdio.h>
#include <string.h>

int main(void) {
  char frase[50];
  int i;

  printf("Digite uma frase: ");
  fgets(frase, 50, stdin); // Pegar a frase da string 
  int tamanho = strlen(frase); // Contar o numero de caracteres da string

  // Mudança de valores para criptografia
  for(i = 0; i < tamanho; i++) {
    if(frase[i] == 'a' || frase[i] == 'A') 
      frase[i] = 49;
    else if(frase[i] == 'e' || frase[i] == 'E')
      frase[i] = 50;
    else if(frase[i] == 'i' || frase[i] == 'I')
      frase[i] = 51;
    else if(frase[i] == 'o' || frase[i] == 'O')
      frase[i] = 52;
    else if(frase[i] == 'u' || frase[i] == 'U')
      frase[i] = 53;
  }

  printf("%s", frase);

  return 0;
}