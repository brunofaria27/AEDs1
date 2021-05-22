#include <stdio.h>
#include <string.h>

void remover(char *p) {
  int n = 0;

  for(int i = 0; i < strlen(p); i++){
    if(p[i] != ' '){
      p[n++] = p[i];  // Vai guardando as variaveis quando p[i] nao for espaço
    }   
  }
  
  p[n] = '\0';

}

int main(void) {
  int i;
  char frase[101];
  char auxiliar;

  printf("Digite uma frase: ");
  fgets(frase, 101, stdin);

  remover(frase);
  printf("String sem espaços em branco: %s\n", frase);

  return 0;
}