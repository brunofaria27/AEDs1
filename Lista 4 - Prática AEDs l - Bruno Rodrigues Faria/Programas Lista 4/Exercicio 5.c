#include <stdio.h>

int main(void) {
  int valor = 0;
  
  // Input da quantidade de vezes que a palavra programação será escrita
  printf("Digite o número de vezes que deseja imprimir a palavra PROGRAMAÇÃO: ");
  scanf("%i", &valor);
  
  if (valor >= 0 ) { // Start if se o valor for numero =positivo 
    for (int i = 0; i < valor; i++) { // Start for para repetir a palavra PROGRAMAÇÃO n (valor) vezes
      printf("PROGRAMAÇÃO\n");
    } // End for para repetir a palavra PROGRAMAÇÃO n (valor) vezes 
  } // End if se o valor for numero positivo
  else { // Start else caso o valor nao seja positivo 
    printf("Não foi possível escrever a palavra PROGRAMAÇÃO na quantidade de vezes desejada, pois o número digitado não é positivo. ");
  } // End else caso o valor nao seja positivo

  return 0;
}