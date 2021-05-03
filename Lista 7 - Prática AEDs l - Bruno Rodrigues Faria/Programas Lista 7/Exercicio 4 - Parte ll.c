#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Função recursiva para verificar se a palavra é palíndromo
int palindromo (char letras[], int tam, int i) {
    if (i > tam / 2) {
      return 1;
    }
    if (letras[i] == letras[(tam - 1) - i]) {
      return palindromo(letras, tam, i + 1);
    }
    else { 
      return -1; // Retorno caso não seja Palindromo
    }
}

int main() {
  char letras[15];
  int tam = 0;

    printf("Digite uma palavra: ");
    scanf("%c", &letras); // Ler a palavra digitada pelo usuário

    tam = strlen(letras); // Tamanho da palavra

    // retorna 1 caso seja palindromo e -1 caso não seja
    if (palindromo(letras, tam, 0) > 0) {
      printf("A palavra é um palindromo");
    }
    else {
      printf("A palavra nao é um palindromo");
    }

    return 0;
}