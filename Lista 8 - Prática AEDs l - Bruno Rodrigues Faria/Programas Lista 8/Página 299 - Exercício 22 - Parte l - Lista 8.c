#include <stdio.h>

void receber(int i, int j, int m[10][5]) {
 
  for (i = 0; i < 10; i++) {
    for (j = 0; j < 5; j++) {
      printf("Digite o elemento da linha %i e coluna %i: ", i + 1, j + 1);
      scanf("%i", &m[i][j]);
    } // END FOR J
  } // END FOR I
  
}

int soma(int m[10][5]){
  int i, j;
  int soma = 0;
    
  for(i = 6; i < 10; i++) {
    for(j = 0; j < 5; j++){
      soma = soma + m[i][j];
    }
  }

  return soma;
}


int main(void) {
  int i, j;
  int m[10][5];
  int function = 0;

  receber(i, j, m);

  function = soma(m);
  printf("A soma de todos elementos localizados abaixo da linha 6 é: %i", function);

  return 0;
}