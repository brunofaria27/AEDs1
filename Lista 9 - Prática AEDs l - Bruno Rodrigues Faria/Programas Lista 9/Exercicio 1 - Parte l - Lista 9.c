#include <stdio.h>
#include <string.h>

int main(){
  int i;
  char frase[50];

  printf("Digite uma frase: ");
  fgets(frase, 50, stdin); // Pegar a frase da string 
  int tamanho = strlen(frase) - 1; // Contar o numero de caracteres da string

  char invertida[tamanho];
 
  for(i = tamanho; i >= 0; i--) {
    invertida[i] = frase[i];
  }
    
  for(i = tamanho - 1; i >= 0; i--) {
    if(invertida[i] != ' ' && invertida[i] != 'a' && invertida[i] != 'A' && invertida[i] != 'E' && invertida[i] != 'e' && invertida[i] != 'i' && invertida[i] != 'I' && invertida[i] != 'O' && invertida[i] != 'o' && invertida[i] != 'u' && invertida[i] != 'U') {
      invertida[i] = '#';
    } // End if
    printf("%c", invertida[i]);
  } // End for

  return 0;
}