#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
  char cadeia1[50]; 
  char cadeia2[50];
  char aux;
  int i, j;
    
  //Entrada de dados
  printf("\nEntre com a primeira frase: ");
  fgets(cadeia1, 50, stdin);
    
  printf("\nEntre com a segunda frase: ");
  fgets(cadeia2, 50, stdin);
    
  //Coloca as letras de cada frase em ordem alfabetica
  for(i = 0; i < strlen(cadeia1); i++) {
    for(j = i + 1; j < strlen(cadeia2); j++) {

      if(cadeia1[i] > cadeia1[j]) {
        aux = cadeia1[i];
        cadeia1[i] = cadeia1[j];
        cadeia1[j] = aux;
      }
             
      // o mesmo é feito para a segunda cadeia
      if(cadeia2[i] > cadeia2[j]) {
        aux = cadeia2[i];
        cadeia2[i] =  cadeia2[j];
        cadeia2[j] = aux;
      }     
      
    }
  }
    
  //Com as duas String em ordem alfabetica agora compara o conteudo de ambas
  if(strcmp(cadeia1,cadeia2) == 0){
    printf("\nÉ permutação! ");
  } else {
    printf("\nNão é permutação! ");    
  }
    
  return 0;
}