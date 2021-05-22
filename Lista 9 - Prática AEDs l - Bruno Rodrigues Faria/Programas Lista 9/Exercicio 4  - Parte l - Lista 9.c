#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Subrotina elimina espaços antes, meio e depois da palavra
void correcao(char *correcao) {
  int i, j = 0;

  for (i = 0; i < strlen(correcao); i++) {
    if (correcao[i] == ' ') {
      if (i == 0) {
        while (correcao[i] == ' ') {
          i++;
        }
        correcao[j] = correcao[i];
        j++;
      } // End If
      else {
        correcao[j] = correcao[i];
        j++;
        while (correcao[i + 1] == ' ') {
          i++;
        }
      } // End Else
    } // End IF
    else {
      correcao[j] = correcao[i];
      j++;
    } // End else 
  } // End for
    
  if(correcao[j - 1] == ' '){
    correcao[j - 1] = '\0';
  }
  else {
    correcao[j] = '\0';
  }
    
} // End sub-rotina

// Função para contar quantas palavras tem na frase digitada
int quantidades(char frase[]) {
  int i, cont = 0;
  
  for(i = 0; i < strlen(frase); i++){
    if(frase[i] == ' '){
      cont++;
    }
  }
  return cont + 1; // Adiciona-se um para contar a primeira palavra
}

int main() {
  char *frase = (char *)malloc(sizeof(char) * 50);
  int qntd, i;

  printf("Digite uma frase: ");
  scanf("%[^\n]", frase); // Pegar frase sem usar fgets

  correcao(frase);

  qntd = quantidades(frase);
  printf("Quantidade de palavras: %i\n", qntd);
  printf("%s", frase);

  return 0;
}